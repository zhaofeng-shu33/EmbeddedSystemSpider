#include "LobotServoController.h"
#include"SoftwareSerial.h"

SoftwareSerial LobotServoController::mySerial(10,11); //RX,TX

LobotServoController myse;
void setup() {
  LobotServoController::mySerial.begin(9600);
  /*//myse.moveServo(0, 1500, 1000); //0号舵机1000ms移动至1500位置
  //delay(2000);
  //myse.moveServo(2, 800, 1000); //2号舵机800ms移动至800位置
  //delay(2000);
  //myse.moveServos(5, 1000, 0, 1300, 2, 700, 4, 600, 6, 900, 8, 790); //
  //控制5个舵机，移动时间1000ms，0号舵机至1300位置，2号舵机至700位置，4号舵机至600位置，
  //6号舵机至900位置，8号舵机至790位置
  delay(2000);

  LobotServo servos[2];   //舵机ID位置结构数组
  servos[0].ID = 2;       //2号舵机
  servos[0].Position = 1400;  //1400位置
  servos[1].ID = 4;       //4号舵机
  servos[1].Position = 700;  //700位置
  myse.moveServos(servos, 2, 1000); //控制两个舵机，移动时间1000ms,ID和位置有servos指定

  delay(2000);*/

}

void loop() {
  static uint32_t Timer;

/*  if (millis() > Timer) {
    Timer = millis() + 1000;
    myse.getBatteryVoltage();
    Serial.print("Battery Volt:");
    Serial.println(myse.batteryVoltage);
  }*/
  int t=1000;
  myse.moveServo(1, 1500, t);
  myse.moveServo(2, 900, t);
  myse.moveServo(3, 1600, t);
  myse.moveServo(4, 1750, t);
  myse.moveServo(5, 900, t);
  myse.moveServo(6, 1500, t);
  myse.moveServo(7, 1950, t);
  myse.moveServo(8, 900, t);
  myse.moveServo(9, 1400, t);
  myse.moveServo(10, 1600, t);
  myse.moveServo(11, 900, t);
  myse.moveServo(12, 1500, t);
  myse.moveServo(13, 1250, t);
  myse.moveServo(14, 2150, t);
  myse.moveServo(15, 1650, t);
  myse.moveServo(16, 1200, t);
  myse.moveServo(17, 2000, t);
  myse.moveServo(18, 1800, t);
  delay(1100);
  myse.moveServo(1, 1000, t);
  myse.moveServo(2, 900, t);
  myse.moveServo(3, 1600, t);
  myse.moveServo(4, 1250, t);
  myse.moveServo(5, 900, t);
  myse.moveServo(6, 1500, t);
  myse.moveServo(7, 1450, t);
  myse.moveServo(8, 900, t);
  myse.moveServo(9, 1400, t);
  myse.moveServo(10, 2100, t);
  myse.moveServo(11, 900, t);
  myse.moveServo(12, 1500, t);
  myse.moveServo(13, 1750, t);
  myse.moveServo(14, 2150, t);
  myse.moveServo(15, 1650, t);
  myse.moveServo(16, 1700, t);
  myse.moveServo(17, 2000, t);
  myse.moveServo(18, 1800, t);
  delay(1100);
  /*myse.moveServo(2, 800, 1000); //2号舵机800ms移动至800位置
  delay(2000);
  myse.moveServos(5, 1000, 0, 1300, 2, 700, 4, 600, 6, 900, 8, 790); //
  //控制5个舵机，移动时间1000ms，0号舵机至1300位置，2号舵机至700位置，4号舵机至600位置，
  //6号舵机至900位置，8号舵机至790位置
  delay(2000);

  LobotServo servos[2];   //舵机ID位置结构数组
  servos[0].ID = 2;       //2号舵机
  servos[0].Position = 1400;  //1400位置
  servos[1].ID = 4;       //4号舵机
  servos[1].Position = 700;  //700位置
  myse.moveServos(servos, 2, 1000); //控制两个舵机，移动时间1000ms,ID和位置有servos指定

  delay(2000);
  
  //Serial.print("Battery Volt:");
  //Serial.println(myse.batteryVoltage);

  //myse.receiveHandle();*/
}


