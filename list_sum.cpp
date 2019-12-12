// Copyright (c) 2019 St Mother Teresa High School All rights reserved.
//
// Created by: Teddy Sannan
// Created on: December 2019
// This program puts user inputs into a list
//  and calculates its sum

#include <iostream>
#include <string>

int sums(int times) {
    // This function takes the users numbers to calculate the sum
    // list that would be filled with users numbers
	int list_of_numbers[times];
	// variable declaration
	int numbers_as_integer;
	int total;
	std::string numbers_as_string;

	// process
	for (int number = 0; number <= times; number++) {
	    std::cout << "Enter your number: ";
        std::cin >> numbers_as_string;
        numbers_as_integer = std::stoi(numbers_as_string);
        list_of_numbers[number] = numbers_as_integer;
	}
	// calculates sum of list
	for (int number = 0; number < list_of_numbers; number++) {
	    total = total + list_of_numbers[number]
	}
	// returns list sum to the main function
	return total;
}

main() {
    // This function takes the input of hw many numbers the user wishes to enter
    // variable declaration
    std::string times_as_string;
    int times_as_integer;
    int value = 0;

    // input
    std::cout << "How many numbers do you wish to enter: ";
    std::cin >> times_as_string;

    try {
        // converts string to int
        times_as_integer = std::stoi(times_as_string);
        // calls upon sums function
        value = sums(times_as_integer);
        // prints sum after getting returned value
        std::cout << "The sums of your numbers are" << (value) << std::endl;
    // prevents crashes
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}
