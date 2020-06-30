#ifndef IMAGE_H
#define IMAGE_H

#include <vector>
#include <string>
#include "../dpd/picoPNG/picopng.h"
#include "color.h"

using std::vector;
using std::string;

class BGImage {
  public:
    BGImage();
    ~BGImage();
    
    void loadPNG(string path);

    colorRGB getPixelRGB(int x, int y);
    int getWidth() { return width; }
    int getHeight() { return height; }

  private:
    vector<unsigned char> buffer;
    vector<unsigned char> image;
    unsigned long width;
    unsigned long height;
};

#endif