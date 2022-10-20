
#include <opencv2/opencv.hpp>
#include <string>
#include <vector>
#include "object_detector.cpp"

using namespace cv;

class PathDetector: public ObjectDetector
{
  Mat img;
  ObjectDetector detector;
public:
  PathDetector(Mat src); 
  void detect();
};
