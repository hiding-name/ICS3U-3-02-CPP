// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Sept 2019
// This is program number guesser

#include <iostream>

int main() {
    // This will add numbers
    const int NUMBER = 5;
    int guess;

    // input
    std::cout << "\nGuess the number: " << std::endl;
    std::cin >> guess;

    // process
    if (guess == NUMBER) {
        // output
        std::cout << "You got it.";
    }
}
