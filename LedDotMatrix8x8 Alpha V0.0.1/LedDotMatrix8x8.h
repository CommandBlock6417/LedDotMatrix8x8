/*
 * ledDotMatrix8x8.h - Library for controlling a generic 8x8 led dot matrix display
 * Created by Panos Koutsoumanis (aka CommandBlock6417), December 6, 2019
 * Available on Github: http://www.github.com/CommandBlock6417/ledDotMatrix8x8
 */
#ifndef ledDotMatrix8x8
#define ledDotMatrix8x8

#include "Arduino.h"

class LedDotMatrix8x8 
{
   public:
     LedDotMatrix8x8(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int y1, int y2, int y3, int y4, int y5, int y6, int y7, int y8);
     void dotOn(int onX,int onY);
     void dotOff(int offX,int offY);
     void allOff();
     void allOn();
     void blinkDot(int blinkX, int blinkY, int blinkDelay);
     void blinkAll(int allBlinkDelay);
   private:
     int _x1;
     int _x2;
     int _x3;
     int _x4;
     int _x5;
     int _x6;
     int _x7;
     int _x8;
     int _y1;
     int _y2;
     int _y3;
     int _y4;
     int _y5;
     int _y6;
     int _y7;
     int _y8;
     int _onX;
     int _onY;
     int _offX;
     int _offY;
     int _blinkX;
     int _blinkY;
     int _blinkDelay;
     int _allBlinkDelay;
};

#endif
