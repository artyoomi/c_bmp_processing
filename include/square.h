#ifndef __SQUARE__
#define __SQUARE__

#include <stdint.h>
#include <math.h>

#include "bmp.h"
#include "exceptions.h"

#define clip(min, max, coord) ( \
               (coord < min) ? min : ((coord > max) ? max : coord) \
)

int32_t interpolate(RGB*** arr, double k, double b,
                    int64_t x_start, int64_t x_end, RGB color);

int32_t draw_line(RGB***, const BitmapInfoHeader*,
                  int64_t, int64_t, int64_t, int64_t, 
                  const uint32_t, RGB color);

int32_t square(RGB***, const BitmapInfoHeader*, 
               int32_t*, uint32_t, uint32_t, RGB, RGB);

#endif