/*
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();            // 初始化TFT_eSPI库

void setup() {
  // 初始化SPI总线
  Serial.begin(115200);
  
  // 初始化TFT LCD屏幕
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.println("Hello World");
  tft.drawString("Hello World", 10, 10);
  
}

void loop() {
    //tft.drawString("Hello World", 5, 5);
    
  // 程序循环
}*/


#include <TFT_eSPI.h>
#include <SPI.h>
#include "./picture/Picture.h"
#include "./picture/Elysia.h"
#include "./picture/cat.h"
#include "./picture/p1.h"
#include "./picture/test.h"
#include "./picture/kfk.h"

TFT_eSPI tft = TFT_eSPI();            // 初始化TFT_eSPI库

void setup() {
  Serial.begin(115200);
  
  // 初始化TFT LCD屏幕
  tft.init();
  tft.setRotation(0);   //1-3 为90-270度旋转
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.println("Hello World");
  tft.drawString("Hello World", 10, 10);
  
  tft.setSwapBytes(true);  //RGB->BGR
  //tft.pushImage(0,0,128,160,p4);
}

void loop() {
    //tft.drawString("Hello World", 5, 5);
    tft.pushImage(0,0,128,160,p4);
    delay(5000);
    tft.pushImage(0,0,128,160,kfk);
    delay(5000);
    tft.pushImage(0,0,128,160,test);
    delay(5000);
    tft.pushImage(0,0,128,160,am);
    delay(5000);
}

