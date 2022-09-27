// Copyright(c) 2022 Evgeny Vovk All rights reserved
//
// Created by : Evgeny Vovk
// Created on : September 2022
// ICS3U-Unit1-03.cpp File, learning input processing and output in C++

#include <cmath>
#include <iostream>

int main() {
    // creating variables
    int widthOfRectangle;
    int lengthOfRectangle;
    double perimeterOfRectangle;
    double areaOfRectangle;

    //input
    std::cout << "Input the length of the rectangle in millimeters: ";
    std::cin >> lengthOfRectangle;
    std::cout << "Input the width of the rectangle in millimeters: ";
    std::cin >> widthOfRectangle;

    //process and output
    std::cout << "The area of the rectangle is "
    << (widthOfRectangle * lengthOfRectangle) << "mm².\n";
    std::cout << "The perimeter of the circle is "
    << (2 * (widthOfRectangle + lengthOfRectangle)) << "mm.";

    std::cout << "\n\nDone.\n";
}
