#include <iostream>
#include "opencv2/opencv.hpp"



int main(int argc,char **args){

    if(argc < 2){
        std::cout << "need image path"  << std::endl;
        return  1;
    }

    cv::Mat img = cv::imread(args[1]);

    const std::string  winname = "img";
    cv::namedWindow(winname,cv::WINDOW_NORMAL);
    cv::imshow(winname,img);
    cv::waitKey(0);
    cv::destroyWindow(winname);

    return 0;
}
