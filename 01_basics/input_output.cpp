/*
    * input and output operations in C++
    * This code demonstrates how to read input from the user and print output to the console in C++.
*/

#include <iostream>
using namespace std;

int main() {
    // Declare a variable to hold user input
    int number;

    // Prompt the user for input
    cout << "Enter a number: ";
    
    // Read input from the user
    cin >> number;

    // Output the entered number
    cout << "You entered: " << number << endl;

    return 0;
}