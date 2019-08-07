#include<iostream>
#include<string>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main(int argc, char* argv) {
	printf("Hello world\n");
	Mat img;
	img = imread("lights.jpg");
	if (img.empty()) {
		printf("Error in reading images\n");
		return 0;
	}
	string windowName = "Display an image";
	namedWindow(windowName,WINDOW_AUTOSIZE);
	imshow(windowName,img);
	waitKey();
	//system("pause");
	return 0;
}