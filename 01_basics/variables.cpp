/*
    * C++ Variables Example
    * This program demonstrates the declaration and initialization of variables in C++.
    * It includes examples of different data types such as int, float, char, and string.
*/

#include <iostream>  //* Preprocessor directive to include input-output stream library
using namespace std; //* Use the standard namespace to avoid prefixing std:: before standard functions
int main() {
    //* Declare and initialize variables of different data types
    int age = 25;                //* Integer variable
    float height = 5.9;         //* Floating-point variable
    char initial = 'A';          //* Character variable
    string name = "Alice";       //* String variable

    //* Output the values of the variables to the console
    cout << "Name: " << name << endl;          //* Output the string variable
    cout << "Initial: " << initial << endl;    //* Output the character variable
    cout << "Age: " << age << endl;            //* Output the integer variable
    cout << "Height: " << height << endl;      //* Output the floating-point variable

    return 0;  //* Return 0 to indicate successful execution
}