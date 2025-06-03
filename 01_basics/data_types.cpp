/*
    * Data Types in C++
    * C++ supports several built-in data types, including:
        * - int: for integers
        * - float: for floating-point numbers
        * - double: for double-precision floating-point numbers
        * - char: for single characters
        * - bool: for boolean values (true or false)
*/

//? int - Integer data type
#include <iostream>
using namespace std;

int main() {
    int number = 10; // Declare an integer variable and initialize it
    cout << "The number is : " << number << endl;
    return 0;
}

//? float - Floating-point data type
#include <iostream>
using namespace std;

int main() {
    float pi = 3.14f; // Declare a float variable and initialize it
    cout << "The value of pi is : " << pi << endl;
    return 0;
}

//? double - Double-precision floating-point data type
#include <iostream>
using namespace std;

int main() {
    double e = 2.718281828459045; // Declare a double variable and initialize it
    cout << "The value of e is : " << e << endl;
    return 0;
}

//? char - Character data type : char is not a string, it is a single character
#include <iostream>
using namespace std;

int main() {
    char letter = 'A'; //! We use single quotes for characters
    // char letter = "A"; //! This is incorrect, as "A" is a string, not a character
    cout << "The letter is : " << letter << endl;
    return 0;
}

//? string - String data type : string is a sequence of characters, not a single character
    //! string is not a built-in data type in C++, it is part of the C++ Standard Library

#include <iostream>
#include <string> // Include the string header file
using namespace std;

int main() {
    string name = "Oussama SAIDI"; // Declare a string variable and initialize it
    cout << "The name is : " << name << endl;
    return 0;
}

//? bool - Boolean data type
    //! bool can only have two values: true or false
    //* It is used to represent truth values in logical expressions
    //* It is often used in conditional statements and loops
    //! when printing a boolean value, it will print 1 for true and 0 for false 

#include <iostream>
using namespace std;

int main() {
    bool isRaining = false; // Declare a boolean variable and initialize it
    cout << "Is it raining? " << isRaining << endl; //* Prints 0 for false
    return 0;
}

