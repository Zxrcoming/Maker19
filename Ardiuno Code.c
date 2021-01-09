// NOTE : Remember to use Ardiuno MEGA 2560 
#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h>
#define CLK 11 
#define OE  9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);
String b[32];
int c = 4; 
int a[32];
void setup() 
{
  matrix.begin();
  Serial.begin(115200); 
}
void loop() 
{
  while(Serial.read() > 0)
  {
  if(Serial.find('[') == 1)
  { 
    
    b[1] = Serial.readStringUntil(',');
    b[2] = Serial.readStringUntil(',');
    b[3] = Serial.readStringUntil(',');
    b[4] = Serial.readStringUntil(',');
    b[5] = Serial.readStringUntil(',');
    b[6] = Serial.readStringUntil(',');
    b[7] = Serial.readStringUntil(',');
    b[8] = Serial.readStringUntil(',');
    b[9] = Serial.readStringUntil(',');
    b[10] = Serial.readStringUntil(',');
    b[11] = Serial.readStringUntil(',');
    b[12] = Serial.readStringUntil(',');
    b[13] = Serial.readStringUntil(',');
    b[14] = Serial.readStringUntil(',');
    b[15] = Serial.readStringUntil(',');
    b[16] = Serial.readStringUntil(',');
    b[17] = Serial.readStringUntil(',');
    b[18] = Serial.readStringUntil(',');
    b[19] = Serial.readStringUntil(',');
    b[20] = Serial.readStringUntil(',');
    b[21] = Serial.readStringUntil(',');
    b[22] = Serial.readStringUntil(',');
    b[23] = Serial.readStringUntil(',');
    b[24] = Serial.readStringUntil(',');
    b[25] = Serial.readStringUntil(',');
    b[26] = Serial.readStringUntil(',');
    b[27] = Serial.readStringUntil(',');
    b[28] = Serial.readStringUntil(',');
    b[29] = Serial.readStringUntil(',');
    b[30] = Serial.readStringUntil(',');



   
    a[1] = b[1].toInt();
    a[2] = b[2].toInt();
    a[3] = b[3].toInt();
    a[4] = b[4].toInt();
    a[5] = b[5].toInt();
    a[6] = b[6].toInt();
    a[7] = b[7].toInt();
    a[8] = b[8].toInt();
    a[9] = b[9].toInt();
    a[10] = b[10].toInt();
    a[11] = b[11].toInt();
    a[12] = b[12].toInt();
    a[13] = b[13].toInt();
    a[14] = b[14].toInt();
    a[15] = b[15].toInt();
    a[16] = b[16].toInt();
    a[17] = b[17].toInt();
    a[18] = b[18].toInt();
    a[19] = b[19].toInt();
    a[20] = b[20].toInt();
    a[21] = b[20].toInt();
    a[22] = b[22].toInt();
    a[23] = b[23].toInt();
    a[24] = b[24].toInt();
    a[25] = b[25].toInt();
    a[26] = b[26].toInt();
    a[27] = b[27].toInt();
    a[28] = b[28].toInt();    
    a[29] = b[29].toInt();
    a[30] = b[30].toInt();

//for(int i=1;i<31;i++)Serial.print(b[i]),Serial.print(','),Serial.println(a[i]);
 matrix.fillRect(0, 0, 32,32, matrix.Color333(0, 0, 0));   
  if(a[1]!=0&&a[2]!=0)
    { matrix.fillCircle(a[1], a[2]+c-2, 1, matrix.Color333(4, 0, 7));}   //头

  if(a[3]!=0&&a[4]!=0&&a[1]!=0&&a[2]!=0)
    { matrix.drawLine(a[1], a[2]+c, a[3],a[4]+c, matrix.Color333(0, 0, 7));}  //脖子

  if(a[3]!=0&&a[4]!=0&&a[5]!=0&&a[6]!=0)
    { matrix.drawLine(a[3], a[4]+c, a[5],a[6]+c, matrix.Color333(0, 3, 7));}
  if(a[7]!=0&&a[8]!=0&&a[5]!=0&&a[6]!=0)
    { matrix.drawLine(a[5], a[6]+c, a[7],a[8]+c, matrix.Color333(0, 3, 7));}
  if(a[7]!=0&&a[8]!=0&&a[9]!=0&&a[10]!=0)
    { matrix.drawLine(a[7], a[8]+c, a[9],a[10]+c, matrix.Color333(0, 3, 7));}   //右手

  if(a[3]!=0&&a[4]!=0&&a[11]!=0&&a[12]!=0)
    { matrix.drawLine(a[3], a[4]+c, a[11],a[12]+c, matrix.Color333(7, 0, 7));}
  if(a[13]!=0&&a[14]!=0&&a[11]!=0&&a[12]!=0)
    { matrix.drawLine(a[11], a[12]+c, a[13],a[14]+c, matrix.Color333(7, 0, 7));}
  if(a[13]!=0&&a[14]!=0&&a[15]!=0&&a[16]!=0)  
    { matrix.drawLine(a[13], a[14]+c, a[15],a[16]+c, matrix.Color333(7, 0, 7));}    //左手
    
  if(a[3]!=0&&a[4]!=0&&a[17]!=0&&a[18]!=0)
    { matrix.drawLine(a[3], a[4]+c, a[17],a[18]+c, matrix.Color333(5, 0, 3));}    //身体

  if(a[17]!=0&&a[18]!=0&&a[19]!=0&&a[20]!=0)
    { matrix.drawLine(a[17], a[18]+c, a[19],a[20]+c, matrix.Color333(5, 5, 5));}
  if(a[21]!=0&&a[22]!=0&&a[19]!=0&&a[20]!=0) 
    { matrix.drawLine(a[19], a[20]+c, a[21],a[22]+c, matrix.Color333(5, 5, 5));}
  if(a[21]!=0&&a[22]!=0&&a[23]!=0&&a[24]!=0) 
    { matrix.drawLine(a[21], a[22]+c, a[23],a[24]+c, matrix.Color333(5, 5, 5));}   //右腿

  if(a[17]!=0&&a[18]!=0&&a[25]!=0&&a[26]!=0)
    { matrix.drawLine(a[17], a[18]+c, a[25],a[26]+c, matrix.Color333(4, 4, 4));}
  if(a[25]!=0&&a[26]!=0&&a[27]!=0&&a[28]!=0)    
    { matrix.drawLine(a[25], a[26]+c, a[27],a[28]+c, matrix.Color333(4, 4, 4));}
  if(a[29]!=0&&a[30]!=0&&a[27]!=0&&a[28]!=0)
    { matrix.drawLine(a[27], a[28]+c, a[29],a[30]+c, matrix.Color333(4, 4, 4));}   //左腿

    //delay(500);
    //matrix.fillRect(0, 0, 32,32, matrix.Color333(0, 0, 0));
  }
}
}
