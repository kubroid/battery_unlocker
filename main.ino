// https://www.pcbway.com/project/shareproject/Okai_ES200G_36v_Scooter_Battery_Controller_project_By_jag35.html

void setup() {

Serial.begin(9600);

}

void loop() {

// 0x3A, 0x13, 0x01, 0x16, 0x79

Serial.write(0x3A);

Serial.write(0x13);

Serial.write(0x01);

Serial.write(0x16);

Serial.write(0x79);

delay(5000);

}
