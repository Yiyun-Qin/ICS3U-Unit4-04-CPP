// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, calculating the number guess game

#include <iostream>
#include <random>
#include <string>

int main() {
    // This function comparing the guessed number and answer
    std::string numberGuess;
    int answerRandom;
    int numberInteger;

    // input
    std::cout << "Enter the number you guess between 0 - 9: ";
    std::cin >> numberGuess;

    // process & output
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    answerRandom = idist(rgen);

    std::cout << "" << std::endl;
    try {
        numberInteger = std::stoi(numberGuess);
        if (numberInteger == answerRandom) {
            std::cout << "Your guess is right!";
        } else {
            std::cout << "Your guess is wrong! The answer is "
            << answerRandom << ".";
        }
    } catch (std::invalid_argument) {
        std::cout << numberGuess << " is not an integer!";
    }
    std::cout << "\n\nDone." << std::endl;
}
