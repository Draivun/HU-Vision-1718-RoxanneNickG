#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	int throwError = 0, e = 1 / throwError; //Throws error without the need to include a header
	//TODO: Nothing
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
    for (int pixel_location = 0; pixel_location < (getWidth()*getHeight()); ++pixel_location) {
        Intensity copied_pixel = other.getPixel(pixel_location);
        setPixel(pixel_location, copied_pixel);
    }
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
    intensity_array = new Intensity[(width*height)];
}

IntensityImageStudent::~IntensityImageStudent() {
    delete[] intensity_array;
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
    delete[] intensity_array;
    intensity_array = new Intensity[(width*height)];
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
    delete[] intensity_array;
    for (int pixel_location = 0; pixel_location < (getWidth()*getHeight()); ++pixel_location) {
        Intensity copied_pixel = other.getPixel(pixel_location);
        setPixel(pixel_location, copied_pixel);
    }
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
    intensity_array[(y*(getWidth())) + x] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
    intensity_array[i] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
    return intensity_array[(y*(getWidth())) + x];
}

Intensity IntensityImageStudent::getPixel(int i) const {
    return intensity_array[i];
}