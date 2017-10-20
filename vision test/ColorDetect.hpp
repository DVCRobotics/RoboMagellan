#include <iostream>
#include <string>
#include <sstream>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

int hueLow  = 15;
int hueHigh = 36;

int satLow  = 0;
int satHigh = 255;

int valLow  = 0;
int valHigh = 255;

void makeTrackbarWindow();
void drawColorRange(Mat gradientimg);
Scalar ScalarHSV2BGR(Scalar color);
