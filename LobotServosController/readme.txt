本库使用Serial类进行串口通信，占用Arduino的一个硬件串口
接线：舵机控制板的Tx接Arduino的Rx，舵机控制板的Rx接Arduino的Tx，舵机控制板的GND接Arduino的GND

使用库前请初始化串口为波特率9600  @@@@不支持其他波特率@@@@
舵机移动，运行/停止动作组等函数均为静态函数不用实例化LobotServoController类可直接调用
调用举例：
  LobotServoController::moveServo(0,1200,1000)； //0号舵机1000ms移动至1200位置
  更多函数参看代码，代码有详细注释

发送获取电池电压命令后，需用户自行运行receiveHandle以从串口数据中取出电压信息
获得电池电压后电池电压被保存在类成员batteryVoltage，用户需自行读取改变量，单位为毫伏mv

下载程序时 需要先把控制板与Arduino板间的连接断开，Arduino才能正常下载程序。
如果使用Arduino Mega等具有多个硬件串口的板子，用户可以自行修改库代码，使用其他硬件串口
用做与舵机控制板间的通信
