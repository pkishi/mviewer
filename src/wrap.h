#pragma once

#include <string>
#include <raylib.h>
#include "color.h"
#include "data.h"

using std::string;

void clearBackground(colorRGB col);
void drawRectangle(int x, int y, int w, int h, colorRGB col);
void drawLine(int xi, int yi, int xf, int yf, colorRGB col);
void drawLineEx(int xi, int yi, int xf, int yf, float thick, colorRGB col);
void drawTextEx(Font ft, string msg, int x, int y, colorRGB col);
void drawCircle(int x, int y, float r, colorRGB col);  
void drawCircleLines(int x, int y, float r, colorRGB col); 
void drawRing(Vector2 center, float iRad, float oRad, colorRGB col);
