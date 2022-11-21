// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // this function generates a random number
    int value = 0;
    int rValue = 0;
    int gValue = 0;
    int bValue = 0;

    // process and output
    for (int loopCounter = 0; loopCounter < 255; loopCounter++) {
        rValue = rValue + 1;
        for (int loopCounter = 0; gValue <= 255; loopCounter++) {
            gValue++;
            for (int loopCounter = 0; bValue <= 255; loopCounter++) {
                bValue++;
                std::cout << "R " << rValue << "G " << "B" << bValue << "\n";
            }
        }
    }
    std::cout << "\nDone.";
}
