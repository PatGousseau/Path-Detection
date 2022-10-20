#include <iostream>
#include <opencv2/opencv.hpp>
#include "path_detector.cpp"

using namespace cv;
using namespace std;

int main(int, char**) {
    Mat image;
    image = imread("/home/patrick/Documents/Path-Detection/Lena.png", IMREAD_COLOR);
    PathDetector pathDetector = PathDetector(image);
    pathDetector.detect();
    return 0;
}
