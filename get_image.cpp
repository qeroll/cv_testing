#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <queue>
#include <chrono>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <filesystem>
#include <future>

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"

int main(int argc, char* argv[])
{
    bool capture_successful = false;
    cv::Mat cv_img(1920, 1080, CV_8UC3);
    std::string filename = "/tmp/test.png";

    cv::VideoCapture vid_cap(0);
    
    sleep(1);

    try
    {
        capture_successful = vid_cap.read(cv_img);
        if (capture_successful) {
            std::cout << "writing image " << filename << std::endl;
            cv::imwrite(filename, cv_img);
        }
        else
        {
            std::cout << "capture unsuccesful" << std::endl;
        }
    }
    catch (const std::exception& e) // reference to the base of a polymorphic object
    {
        throw e;
    }

    vid_cap.release();
}
