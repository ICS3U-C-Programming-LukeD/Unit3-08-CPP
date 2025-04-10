// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: April 10, 2025

#include <cmath>
// adds math library
#include <iostream>
// adds iostream library
#include <string>
// adds string library

int main() {
    std::string year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    try {
        int yearInt = std::stoi(year);
         if (yearInt % 4 == 0) {
            if (yearInt % 100 == 0) {
                if (yearInt % 400 == 0) {
                    std::cout << "It's a leap year!" << std::endl; }
                else
                    std::cout << "It's not a leap year!" << std::endl;}
            else
                std::cout << "It's a leap year!" << std::endl; }
        else
            std::cout << "It's not a leap year!" << std::endl;
} catch (const std::invalid_argument&) {
        std::cout << year << " is not an integer" << std::endl;
    }
}