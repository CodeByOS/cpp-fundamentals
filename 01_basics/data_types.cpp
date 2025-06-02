
/*
    * Data Types in C++
    * This code demonstrates the basic data types available in C++.
    * It includes examples of integer, floating-point, character, and boolean types.
*/

#include <iostream>
using namespace std;

int main() {
    // Integer data type
    int integerVar = 42;
    cout << "Integer: " << integerVar << endl;

    // Floating-point data type
    float floatVar = 3.14f; //! we use f to indicate a float literal
    //! without f, it would be treated as a double
    cout << "Float: " << floatVar << endl;

    // Double precision floating-point data type
    double doubleVar = 2.718281828459045;
    cout << "Double: " << doubleVar << endl;

    // Character data type
    char charVar = 'A';
    cout << "Character: " << charVar << endl;

    // Boolean data type
    bool boolVar = true;
    cout << "Boolean: " << boolVar << endl;

    return 0;
}