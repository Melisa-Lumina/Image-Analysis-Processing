#include <iostream>
#include <opencv2/opencv.hpp>
#include "Functions.h"
#include "Exercises.h"
#include "EtalonClassifier.h"


int main()
{

    //cv::Mat src_8uc3_img = cv::imread("C:\\Users\\Lenovo\\source\\repos\\IA_1\\Images\\lena.png", cv::IMREAD_COLOR);

    //Exercise1(src_8uc3_img);

    //cv::Mat binaryImage = cv::imread("C:\\Users\\Lenovo\\source\\repos\\IA_2\\IA_2\\Images\\train.png", cv::IMREAD_GRAYSCALE);

    //Exercise2(binaryImage);

    //cv::Mat testImage = cv::imread("C:\\Users\\Lenovo\\Downloads\\etalon.png");

    cv::Mat testImage = cv::imread("C:\\Users\\Lenovo\\Downloads\\originalImage.jpg");

    if (testImage.empty()) {
        std::cerr << "Error: Failed to load image." << std::endl;
        return EXIT_FAILURE;
    }

    //Exercise3(testImage);

    //Exercise4(testImage);

    //Exercise5();

    Exercise6(testImage);

    return EXIT_SUCCESS;
}
