// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Michael Clermont
// Created on: June 2022
// This program uses a function by reference

#include <iostream>
#include <cmath>


void Rounder(float &someVariable, int amountToRound) {
    // function adds 1, by reference

    int tenTimes;
    tenTimes = pow(10, amountToRound);
    someVariable = someVariable * tenTimes;
    someVariable = someVariable + 0.5;
    someVariable = static_cast<int>(someVariable);
    someVariable = someVariable / tenTimes;
}

main() {
    // this function gets a number and calls the AddOne function

    float someNumber;
    int amountRound;

    // input
    std::cout << "Enter a number to round: ";
    std::cin >> someNumber;
    std::cout << "Enter how many decimal places to round by: ";
    std::cin >> amountRound;

    Rounder(someNumber, amountRound);

    std::cout << "\nThe rounded number is: " << someNumber << std::endl;
}
