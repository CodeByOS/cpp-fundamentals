/*
    * if-else statement in C++
    * if-else is used to execute a block of code based on a condition.
    * If the condition is true, the code inside the if block is executed.
    * If the condition is false, the code inside the else block is executed.
    * Syntax:
        if (condition) {
            ? code to be executed if condition is true
        } else {
            ! code to be executed if condition is false
        }
*/

// Example of if-else statement
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age > 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }
}