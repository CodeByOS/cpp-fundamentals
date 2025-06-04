/*
    * for loop in C++ is used to execute a block of code repeatedly for a specified number of iterations.
    * It consists of three parts: initialization, condition, and increment/decrement.
    * The syntax is:
        for (initialization; condition; increment/decrement) {
        *    // code to be executed
        }
    * The initialization is executed once at the beginning, the condition is checked before each iteration, and the increment/decrement is executed after each iteration.
    * The loop continues until the condition evaluates to false.
*/

#include <iostream>
using namespace std;

int main() {
    // Example of a for loop that prints numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << "Number: " << i << endl;
    }

    // Example of a for loop that calculates the sum of numbers from 1 to 10
    int sum = 0;
    for (int j = 1; j <= 10; j++) {
        sum += j;
    }
    cout << "Sum of numbers from 1 to 10: " << sum << endl;

    return 0;
}

