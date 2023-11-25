// Copyright (c) 2023 Marli Peters All Rights Reserved
// Created by: Marli Peters
// Date: Nov. 25, 2023
// This program asks the user to enter a word, then how
// many copies of the word to print out, and then asks
// how many letters of the word to print in each copy.
// Finally it will print given number of characters of the
// word the given number of times.
#include <iostream>

int main() {
    // set counter
    int counter = 0;

    while (true) {
        std::string userWord, copiesStr, subwordStr;
        int copiesInt, subwordInt;

        // det user input for word repeat
        std::cout << "Enter your word: ";
        std::cin >> userWord;
        std::cout << "Enter number of copies: ";
        std::cin >> copiesStr;
        std::cout << "Enter subword size: ";
        std::cin >> subwordStr;
        std::cout << std::endl;

        try {
            // convert strings to integers
            copiesInt = std::stoi(copiesStr);
            subwordInt = std::stoi(subwordStr);
        } catch (std::invalid_argument) {
            // catch invalid integers
            std::cout <<
            "Please enter a valid integer for copies and subword number."
            << std::endl
                      << std::endl;
            continue;
        }

        // catch positive integer errors
        if (copiesInt <= 0 || subwordInt <= 0) {
            std::cout <<
            "Please enter a positive integer for copies and subword number."
            << std::endl
                      << std::endl;
        } else {
            // set count to copies
            int count = copiesInt;
            // set word to be split
            std::string splitWord = userWord.substr(0, subwordInt);
            // display word repeated
            for (counter = 0; counter < count; ++counter) {
                std::cout << splitWord;
            }
            break;
        }
    }

    std::cout << std::endl;

    return 0;
}
