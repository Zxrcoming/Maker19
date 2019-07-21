## 🧐Introduction of Our Making 🧐
### 👺About us
```vim
        Team Name : Maker19
        
        TEAM LEADER : 钟欣瑞
        TEAM PARTNER : 唐绍武
                       贝托
                       陈如孝
                       肖丁诚

```


### The background Story
>🎨This is our Post🎨
![](http://a2.qpic.cn/psb?/V13beCG51KYd1k/t9zgvEwbHiGmoz.O9ibYSvf7YjmsstVfGZSykuQjQTU!/b/dMUAAAAAAAAA&ek=1&kp=1&pt=0&bo=HAtABsAP3AgRGWQ!&tl=3&vuin=2536914044&tm=1563591600&sce=60-2-2&rf=viewer_4)
>😀😘

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

![](http://a4.qpic.cn/psb?/V13beCG51KYd1k/374g2G4QACEtgy6uJdhl1kX.1y3DVNEgSl9DPh68Vek!/b/dFMBAAAAAAAA&ek=1&kp=1&pt=0&bo=HAtABsAP3AgROUQ!&tl=3&vuin=2536914044&tm=1563678000&sce=60-2-2&rf=viewer_4)

![](https://github.com/Zxrcoming/Maker19/blob/master/Picture/1.gif) ![](https://github.com/Zxrcoming/Maker19/blob/master/Picture/2.gif)

This is a Trafic Light project.
- **In gerneral**
``vim
      We're doing this because we found that
    there're some problems whit the tranditional trafic light
```
```js
      we will change the way the light behave to people who see it.
    IN A funning and useful way.
```

- **Details**

  - *We use opencv as our core of tech,and we use Serial Port to display people on the screen*

  - *Because a lot of people used to watching their phones whit heads down when walkacross crosswalk,so we provide light-changable crosswalk which can change to green when Trafic ligh is green and to red when Trafic light is red,then people can easily know when to go and stop*

  - *We use some simple material to perform the crosswalk like little LEDs on the board to display the same color of the Trafic Light*

  - *And the LEDs can change their light continuely when the Trafic green time is running to let people directly know the remaining time of the green Trafic Light*

- **Advantages**
  - ***when the Trafic Light turns red,people may will feel bored when waitting for the green coming,and our product provide a very funny way to comfor people , therefor the Trafic light is not just a Trafic Light, it can capture your image and display it on the screen,although it is just a Matchman(火柴人),but it could be just fun***

  - ***And our LED crosswalk is audio-visual for people to see directly and to understand in mind what is the remaining time of the walking***



### Users
>Everyone living on the earth.

### How to do it.

- ***Steps***
  - Using Ardiuno MEGE 2560 and 32x32 LEDs to replace the traditional trafic light.

  - And we added the opencv tech to display people's movement on our LEDs.

  - Also  we use another LEDs to replace the crosswalk road.

- ***Making process***
  - Preparing the Ardiuno MEGA 2560***(important)***,Jump wires and 32x32 matrix of lights.
  
  - Follow the Introduction online about how to arrange the Jump wires on the back of the 32x32 matrix.~~***it's easy***~~
  
  - Then use the openpose code to toggle the detection of human behaviour.  
    here is [openpose repo](https://github.com/CMU-Perceptual-Computing-Lab/openpose).                 
    
    ***Please Read it carefully before you start our project***.

  - After using the openpose, use our [Node-serial Code](https://github.com/Zxrcoming/Maker19/blob/master/Node-serial%20Code) to communicate with the Ardiuno MEGA 2560 which is burned with [Ardiuno Code](https://github.com/Zxrcoming/Maker19/blob/master/Ardiuno%20Code).
  - Then you shell be good to go.  
  
  ***wish you good luck***

   
