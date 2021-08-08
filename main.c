#include <stdio.h>
#include "headers/ppmHelper.h"
#include "headers/Shapes.h"

int main() {

    const size_t WIDTH = 256;
    const size_t HEIGHT = 256;
    const unsigned long FOREGROUND = 0xFF0000;
    const unsigned long BACKGROUND = 0x000000;
    const unsigned long CHECK_COLOUR = 0xFF00FF;

    unsigned long pixels[WIDTH * HEIGHT];

    fillPixels(pixels, CHECK_COLOUR, WIDTH * HEIGHT);

    borderPattern(pixels, FOREGROUND, BACKGROUND, WIDTH, HEIGHT, 8);

    int result = savePPM("border.ppm", pixels, WIDTH, HEIGHT);

    return result;
}


