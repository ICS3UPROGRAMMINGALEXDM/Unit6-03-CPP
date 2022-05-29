// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: Generates 10 random numbers between 1-50 and finds the one with
// the minimum value

#include <ctime>
#include <array>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stof;
using std::array;

const int MAX_SIZE = 10, MAX_NUM = 100, MIN_NUM = 1;
// This function finds the number wit hthe lowest value and returns it to main
int FindMin(array<int, MAX_SIZE> ints) {
    int lowest = ints[0];
    // for each loop iterates through every spot in the array one at a time
    for (int aNum : ints) {
        if (aNum < lowest) {
            lowest = aNum;
        }
    }

    return lowest;
}


int main() {
    array<int, MAX_SIZE> intArr;

    srand(time(NULL));
    // Generating random numnbers
    for (int counter = 0; counter < MAX_SIZE; counter++) {
        int randomNumber = (rand() % MAX_NUM) + MIN_NUM;
        // Putting random numbers into array
        intArr[counter] = randomNumber;
        cout << "Position " << counter << " is " << intArr[counter] << endl;
    }

    // setting a variable to the return value of find_min
    int minVal = FindMin(intArr);
    cout << endl << "The smallest value is " << minVal;
}
