#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
	int throwError = 0, e = 1 / throwError; //Throws error without the need to include a header
	//TODO: Nothing
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
    for (int pixel_location = 0; pixel_location < (getWidth()*getHeight()); ++pixel_location) {
        RGB copied_pixel = other.getPixel(pixel_location);
        setPixel(pixel_location, copied_pixel);
    }
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
    RGB_array = new RGB[(width*height)];
}

RGBImageStudent::~RGBImageStudent() {
    delete[] RGB_array;
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
    delete[] RGB_array;
    RGB_array = new RGB[(width*height)];
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
    delete[] RGB_array;
    for (int pixel_location = 0; pixel_location < (getWidth()*getHeight()); ++pixel_location) {
        RGB copied_pixel = other.getPixel(pixel_location);
        setPixel(pixel_location, copied_pixel);
    }
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
    RGB_array[(y*(getWidth())) + x] = pixel;
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
    RGB_array[i] = pixel;
}

RGB RGBImageStudent::getPixel(int x, int y) const {
    return RGB_array[(y*(getWidth())) + x];
}

RGB RGBImageStudent::getPixel(int i) const {
    return RGB_array[i];
}