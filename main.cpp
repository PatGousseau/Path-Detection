#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int, char**) {
    Mat image;
    image = imread("/home/patrick/Documents/Path-Detection/path_marker.png", IMREAD_COLOR);
    if(! image.data)
        {
            std::cout<<"Could not open file" << std::endl;
            return -1;
        }
      namedWindow("namba image", WINDOW_AUTOSIZE);
     imshow("namba image", image);
    waitKey(0);
    return 0;
}
