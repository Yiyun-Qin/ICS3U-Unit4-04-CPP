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
    std::string guessString;
    int answerRandom;
    int guessInteger;

    // input
    // process & output
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    answerRandom = idist(rgen);
    do {
        std::cout << "" << std::endl;
        std::cout << "Enter the number you guess between 0 - 9: ";
        std::cin >> guessString;
        std::cout << "" << std::endl;
        try {
            guessInteger = std::stoi(guessString);
            if (guessInteger < 0 || guessInteger > 9) {
                std::cout << "Please put in a number between 0 and 9!";
                std::cout << "\nPlease try again." << std::endl;
            } else if (guessInteger < answerRandom) {
                std::cout << "The answer is bigger than your number!";
                std::cout << "\nPlease try again." << std::endl;
            } else if (guessInteger > answerRandom) {
                std::cout << "The answer is smaller than your number!";
                std::cout << "\nPlease try again." << std::endl;
            } else {
                std::cout << "Your guess is right! The answer is "
                << answerRandom << "!";
                std::cout << "\n\nDone.";
                break;
            }
        } catch (std::invalid_argument) {
        std::cout << "Invalid number!";
        std::cout << "\nPlease try again." << std::endl;
        }
    } while (true);
}
