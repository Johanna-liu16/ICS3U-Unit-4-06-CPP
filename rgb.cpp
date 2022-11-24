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
    for (int loopCounter1 = 0; loopCounter1 < 255; loopCounter1++) {
        for (int loopCounter2 = 0; loopCounter2 < 255; loopCounter2++) {
            for (int loopCounter3 = 0; loopCounter3 < 255; loopCounter3++) {
                std::cout << "R " << loopCounter1 << "G "
                << loopCounter2 << " B" << loopCounter3 << std::endl;
            }
        }
    }
    std::cout << "\nDone.";
}
