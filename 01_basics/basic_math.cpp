
/*
    * Basic Math Operations in C++
    * This code demonstrates how to perform basic arithmetic operations in C++.
*/

#include <iostream>
using namespace std;

int main() {
    //* Declare two variables for the numbers
    int a = 10;
    int b = 5;

    //* Perform basic arithmetic operations
    int sum = a + b;          // Addition
    int difference = a - b;   // Subtraction
    int product = a * b;      // Multiplication
    double quotient = static_cast<double>(a) / b; // Division
    //! static_cast is used to ensure the division results in a double value
    //! This is important to avoid integer division which would truncate the decimal part

    //* Output the results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}