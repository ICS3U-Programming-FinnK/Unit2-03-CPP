// Copyright (c) 2023 Finn Kitor All rights reserved.
//
// Created by: Finn Kitor
// Date: September 27th, 2023
// This program asks the user for the radius and then
// displays the circumference using tau.
#include <iostream>

int main() {
    // constant being used
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // user imputs the circumference
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    // terminal displays the circumference to the user
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " cm" << std::endl;
}