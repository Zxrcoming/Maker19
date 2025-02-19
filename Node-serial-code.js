const fs = require("fs");
const net = require("net");
const SerialPort = require("serialport");
var port = new SerialPort("COM5", {
  baudRate: 115200,
  parity: "none",
  stopBits: 1,
  timeout: 0.2,
  autoOpen: false,
});
var pose = [];
var pose1 = "";
port.open(function (err) {
  if (err) {
    console.log("err", err);
  }
  console.log("isOpen", SerialPort.isopen);
});

process.on("warning", (e) => console.warn(e.stack));
// var people_keypoints = "";
fs.watch("output", (eventType, filename) => {
  //console.log(`event type is: ${eventType}`);
  if (filename) {
    console.log(`filename provided: ${filename}`);
    var contents = fs.readFileSync(`output/${filename}`);
    var jsonContent = JSON.parse(contents);
    // console.log(jsonContent)
    for (var i = 0; i < 45; i = i + 3) {
      var x = jsonContent.people[0].pose_keypoints_2d[i];
      var y = jsonContent.people[0].pose_keypoints_2d[i + 1];
      var r = jsonContent.people[0].pose_keypoints_2d[i + 2];
      //if(i==6||i==15||i==33||i==42) continue;
      x = x / 10;
      y = y / 10;
      x = Math.round(x);
      y = Math.round(y);
      pose.push(x);
      pose.push(y);
    }
    //push the data to the buffer pool(pose array)
  } else {
    console.log("filename not provided");
  }
});

// console.log(people_keypoints);
port.on("open", () =>
  setInterval(() => {
    pose1 = "";
    // use the data one by one and refresh the buffer pool.
    var len = pose.length;
    for (var j = 0; j < len / 30; j++) {
      pose1 += "[";
      for (var i = 0; i < 30; i++) {
        pose1 += String(pose[0]);
        pose1 += ",";
        pose.shift();
      }
    }
    // for(var i = 0;i <= 10000000;i++);
    console.log(pose1);
    port.write(pose1, "ascii"); //things happened here.
    pose1 = "";
  }, 1000)
);
