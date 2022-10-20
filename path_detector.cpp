#include <iostream>
#include <opencv2/opencv.hpp>
#include  "path_detector.h"

using namespace cv;
using namespace std;


PathDetector::PathDetector(Mat src) {
    img = src;
    detector = ObjectDetector();
};

void PathDetector::detect() {
    Mat processedImg;
    processedImg = detector.preprocess(img);
    processedImg = detector.enhance(processedImg);
    processedImg = detector.morphological(processedImg);
    vector<vector<Point>> hull = detector.convexHulls(processedImg);
    // processedImg = detector.gradient(processedImg);
    // namedWindow("image", WINDOW_AUTOSIZE);
    // imshow("image", processedImg);
    // waitKey(0);
}

