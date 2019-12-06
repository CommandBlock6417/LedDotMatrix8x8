/*
 * ledDotMatrix8x8.cpp - Library for controlling a generic 8x8 led dot matrix display
 * Created by Panos Koutsoumanis (aka CommandBlock6417), December 6, 2019
 * Available on Github: http://www.github.com/CommandBlock6417/ledDotMatrix8x8
 */
#include "Arduino.h"
#include "ledDotMatrix8x8.h"
LedDotMatrix8x8::LedDotMatrix8x8(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int y1, int y2, int y3, int y4, int y5, int y6, int y7, int y8)
{
  pinMode(x1, OUTPUT);
  pinMode(x2, OUTPUT);
  pinMode(x3, OUTPUT);
  pinMode(x4, OUTPUT);
  pinMode(x5, OUTPUT);
  pinMode(x6, OUTPUT);
  pinMode(x7, OUTPUT);
  pinMode(x8, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(y3, OUTPUT);
  pinMode(y4, OUTPUT);
  pinMode(y5, OUTPUT);
  pinMode(y6, OUTPUT);
  pinMode(y7, OUTPUT);
  pinMode(y8, OUTPUT);
  _x1 = x1;
  _x2 = x2;
  _x3 = x3;
  _x4 = x4;
  _x5 = x5;
  _x6 = x6;
  _x7 = x7;
  _x8 = x8;
  _y1 = y1;
  _y2 = y2;
  _y3 = y3;
  _y4 = y4;
  _y5 = y5;
  _y6 = y6;
  _y7 = y7;
  _y8 = y8;
  
}
void LedDotMatrix8x8::dotOff(int offX, int offY)
{
  _offX = offX;
  _offY = offY;
  digitalWrite(_offX, LOW);
  digitalWrite(_offY, HIGH);
}
void LedDotMatrix8x8::dotOn(int onX, int onY)
{
  _onX = onX;
  _onY = onY;
  digitalWrite(_onX, HIGH);
  digitalWrite(_onY, LOW);
  dotOff(_x1, _onY);
}
void LedDotMatrix8x8::allOff()
{
  digitalWrite(_x1, LOW);
  digitalWrite(_x2, LOW);
  digitalWrite(_x3, LOW);
  digitalWrite(_x4, LOW);
  digitalWrite(_x5, LOW);
  digitalWrite(_x6, LOW);
  digitalWrite(_x7, LOW);
  digitalWrite(_x8, LOW);
  digitalWrite(_y1, HIGH);
  digitalWrite(_y2, HIGH);
  digitalWrite(_y3, HIGH);
  digitalWrite(_y4, HIGH);
  digitalWrite(_y5, HIGH);
  digitalWrite(_y6, HIGH);
  digitalWrite(_y7, HIGH);
  digitalWrite(_y8, HIGH);
}

void LedDotMatrix8x8::allOn()
{
  digitalWrite(_x1, HIGH);
  digitalWrite(_x2, HIGH);
  digitalWrite(_x3, HIGH);
  digitalWrite(_x4, HIGH);
  digitalWrite(_x5, HIGH);
  digitalWrite(_x6, HIGH);
  digitalWrite(_x7, HIGH);
  digitalWrite(_x8, HIGH);
  digitalWrite(_y1, LOW);
  digitalWrite(_y2, LOW);
  digitalWrite(_y3, LOW);
  digitalWrite(_y4, LOW);
  digitalWrite(_y5, LOW);
  digitalWrite(_y6, LOW);
  digitalWrite(_y7, LOW);
  digitalWrite(_y8, LOW);
}

void LedDotMatrix8x8::blinkDot(int blinkX, int blinkY, int blinkDelay)
{
  _blinkX = blinkX;
  _blinkY = blinkY;
  _blinkDelay = blinkDelay;
  dotOn(_blinkX, _blinkY);
  delay(_blinkDelay);
  dotOff(_blinkX, _blinkY);
  delay(_blinkDelay);
}

void LedDotMatrix8x8::blinkAll(int allBlinkDelay)
{
  _allBlinkDelay = allBlinkDelay;
  allOn();
  delay(_allBlinkDelay);
  allOff();
  delay(_allBlinkDelay);
}
