#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define BUZZER 18
#define LEDPIN 19

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(115200);

  pinMode(BUZZER, OUTPUT);
  pinMode(LEDPIN, OUTPUT);

  Wire.begin(21,22);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)){
    while(1);
  }

  if(!mpu.begin()){
    display.clearDisplay();
    display.setCursor(0,0);
    display.println("MPU FAIL");
    display.display();
    while(1);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("System Ready");
  display.display();

  delay(2000);
}

void loop() {

  sensors_event_t a,g,temp;
  mpu.getEvent(&a,&g,&temp);

  float ax=a.acceleration.x;
  float ay=a.acceleration.y;
  float az=a.acceleration.z;

  float totalAcc=sqrt(ax*ax+ay*ay+az*az);

  Serial.print("ACC=");
  Serial.println(totalAcc);

  display.clearDisplay();
  display.setCursor(0,0);

  display.print("X:");
  display.println(ax);

  display.print("Y:");
  display.println(ay);

  display.print("Z:");
  display.println(az);

  if(totalAcc > 20){

    digitalWrite(BUZZER,HIGH);
    digitalWrite(LEDPIN,HIGH);

    display.println("ACCIDENT!");
  }
  else{

    digitalWrite(BUZZER,LOW);
    digitalWrite(LEDPIN,LOW);

    display.println("SAFE");
  }

  display.display();

  delay(500);
}
