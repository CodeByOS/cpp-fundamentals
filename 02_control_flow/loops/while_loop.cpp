/*
    * While Loop Explain :
    * A while loop in C++ repeatedly executes a block of code as long as a specified condition is true.
    * The syntax is:
        while (condition) {
        *   // code to be executed
        }
    * The condition is checked before each iteration, and if it evaluates to true, the code inside the loop is executed.
    * The loop continues until the condition evaluates to false.
    * It is important to ensure that the condition will eventually become false to avoid an infinite loop.
    
*/
#include <iostream>
using namespace std;

int main() {
    // Example of a while loop that prints numbers from 1 to 5
    int i = 1;
    while (i <= 5) {
        cout << "Number: " << i << endl;
        i++;
    }

    // Example of a while loop that calculates the sum of numbers from 1 to 10
    int sum = 0;
    int j = 1;
    while (j <= 10) {
        sum += j;
        j++;
    }
    cout << "Sum of numbers from 1 to 10: " << sum << endl;

    return 0;
}