#include <iostream>
#include "CImg.h"
using namespace cimg_library;

class Visualizer
{
    public:
    size_t length_;
    size_t width_;
    Visualizer(size_t length, size_t width);

    void drawRectangleShape(CImg<unsigned char>& canvas);
    void drawCircleShape   (CImg<unsigned char>& canvas);
};