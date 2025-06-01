/*
    ! C++ Comments Example
    * This program demonstrates the use of comments in C++.
    * It includes single-line comments, multi-line comments, and documentation comments.
    * Comments are used to explain the code and make it more readable.
    * They are ignored by the compiler and do not affect the program's execution.
    ? Single-line comments start with // and continue to the end of the line.
    ? Multi-line comments start with /* and end with */.                     /*
    
*/

//! Example of comments in C++

#include <iostream>  //* Preprocessor directive to include input-output stream library
using namespace std; //* Use the standard namespace to avoid prefixing std:: before standard functions

int main() {
    // This is a single-line comment explaining the next line of code
    cout << "This is a single-line comment example." << endl;  //* Output a message to the console

    /*
        This is a multi-line comment.
        It can span multiple lines and is used to explain complex logic or provide detailed information.
    */
    cout << "This is a multi-line comment example." << endl;  //* Output another message to the console

    return 0;  //* Return 0 to indicate successful execution
}