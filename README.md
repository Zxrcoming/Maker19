## 🧐Introduction of Our Making 🧐
### 👺About us
```
        Team Name : Maker19
        
        TEAM LEADER : 钟欣瑞
        TEAM PARTNER : 唐绍武
                       贝托
                       陈如孝
                       肖丁诚

```


### The background Story
🎨This is our Post🎨
  <p align="center">
        <img src="./img/(9).jpeg" width="500px">
        😀😘
  </p>



>We're Form Different Coutry and College 🚩🏁  
  But We're together Making our Thing💡  
  And We're good to go! 😘  

>👨‍👦‍👦  Our Group

|Name | Country | College|
|-- | -- | -- |
|钟欣瑞 | China | SWJTU|
|唐绍武 | China | SWJTU|
|肖丁诚 | China | SWJTU|
|陈如孝 | Vietnam(越南) | Guizhou Minzu University|
|贝托 |  República de Guinea Ecuatorial (赤道几内亚) | Dongbei University of Finace & Economics|

### Project Name
 ***平安路导***

### Project Description

<p align="center">
    <img src="./img/(2).jpeg" width="500px" >
</p>
<p align="center">
      <img src="./Picture/2.gif?raw=true" width="500px">  
</p>


#### This is a Trafic Light project.
- **In gerneral**
```vim
      We're doing this because we found that
    there're some problems whit the tranditional trafic light
```
```js
      we will change the way the light behave to people who see it.
    IN A funning and useful way.
```

- **Details**

  - *We use ***openpose*** as our core of tech,and we use Serial Port to display people on the screen*  
  <p align="center">
        <img src="https://github.com/CMU-Perceptual-Computing-Lab/openpose/blob/master/.github/media/pose_face_hands.gif?raw=true">
  </p>
    

  - *Because a lot of people used to watching their phones whit heads down when walkacross crosswalk,so we provide light-changable crosswalk which can change to green when Trafic ligh is green and to red when Trafic light is red,then people can easily know when to go and stop*    

    **At the same time,the driver can have eyes on the road to remind him not going when the road is green.**
    
  >well , what we did is just a small module.
  <p align="center">
        <img src="./img/(1).jpeg" width="500px">
  </p>


  - *We use some simple material to perform the crosswalk like little LEDs on the board to display the same color of the Trafic Light*

  - *And the LEDs can change their light continuely when the Trafic green time is running to let people directly know the remaining time of the green Trafic Light*

- **Advantages**
  - ***when the Trafic Light turns red,people may will feel bored when waitting for the green coming,and our product provide a very funny way to comfor people , therefor the Trafic light is not just a Trafic Light, it can capture your image and display it on the screen,although it is just a Matchman(火柴人),but it could be just fun***   
  
  <p align="center"  >
        <img src="./img/(8).jpeg" width="500px">
  </p>

  
  - ***And our LED crosswalk is audio-visual for people to see directly and to understand in mind what is the remaining time of the walking***



### Users
>Everyone living on the earth.

### How to do it.

- ***Steps***
  - Using Ardiuno MEGE 2560 and 32x32 LEDs to replace the traditional trafic light.  
  <p align="center">
   <img src="./img/(4).jpeg" height="500px">
  </p>
  
- And we added the openpose tech to display people's movement on our LEDs.
  
  - Also  we use another LEDs to replace the crosswalk road.
  
  - This is how the project ends
  <p align="center"  >
        <img src="./img/(7).jpeg" width="500px">
</p>
  
- ***Making process***
  - Preparing the Ardiuno MEGA 2560 ***(important)***,Jump wires and 32x32 matrix of lights.  
  <p align="center">
        <img height="500px" src="./img/(5).jpeg">
  </p>
  
  
  - Follow the Introduction online about how to arrange the Jump wires on the back of the 32x32 matrix.~~***it's easy***~~
  
  - Then use the openpose code to toggle the detection of human behaviour.   
    simple code like:  
    ```sh
       .\bin\OpenPoseDemo.exe  --camera 0  --net_resolution 320x320  --keypoint_scale 1  --number_people_max 1  --write_json  ./output 
    ```
    here is [openpose repo](https://github.com/CMU-Perceptual-Computing-Lab/openpose).                 
    
  ***Please Read it carefully before you start our project***.
  
  - After using the openpose, use our [Node-serial Code](./Node-serial%20Code) to communicate with the Ardiuno MEGA 2560 which is burned with [Ardiuno Code](./Ardiuno%20Code).
  - Then you shell be good to go.  
  
  ***wish you good luck***
