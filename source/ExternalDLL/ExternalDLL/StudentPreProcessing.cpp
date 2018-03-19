#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
    //return nullptr; // Daadwerkelijke implementatie Greyscaling
    int source_width = image.getWidth();
    int source_height = image.getHeight();

    IntensityImage * greyscaled = ImageFactory::newIntensityImage(source_width, source_height);

    for (int new_width = 0; new_width < source_width; ++new_width) {
        for (int new_height = 0; new_height < source_height; ++new_height) {
            RGB source_pixel = image.getPixel(new_width, new_height);
            Intensity new_pixel = source_pixel.g;

            greyscaled->setPixel(new_width, new_height, new_pixel);
        }
    }
    return greyscaled;

}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}