#pragma once
#include "framework.h"

typedef void (*BitmapPixelHandler)(double& r, double& g, double& b, double& a);

bool IterateBitmap(HBITMAP hbm, BitmapPixelHandler handler);