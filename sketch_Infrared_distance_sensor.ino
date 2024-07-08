int IR_SENSOR = 0; // 類比讀取腳設為A0Sensor is connected to the analog A0
int intSensorResult = 0; //感測器結果
float fltSensorCalc = 0; //計算值
void setup()
{
Serial.begin(9600); // 設定與電腦的通訊以顯示結果串列監視器
}
void loop()
{
// read the value from the ir sensor

intSensorResult = analogRead(IR_SENSOR); //取得感測器值
fltSensorCalc = (6787.0 / (intSensorResult - 3.0)) - 4.0; //Calculate distance in cm

Serial.print(fltSensorCalc); //發送距離到計算機
Serial.println(" cm"); //Add cm to result
delay(200); //Wait
}