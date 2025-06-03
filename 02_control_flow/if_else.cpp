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
// #include <iostream>
// using namespace std;

// int main() {
//     int age;

//     cout << "Enter your age: ";
//     cin >> age;

//     if(age > 18) {
//         cout << "You are an adult." << endl;
//     } else {
//         cout << "You are a minor." << endl;
//     }
//     return 0;
// }

/*
    * if else statements can be nested to check multiple conditions.
    * Syntax:
        if (condition1) {
            ? code to be executed if condition1 is true
        } else if (condition2) {
            ? code to be executed if condition2 is true
        } else {
            ! code to be executed if both conditions are false
        }
*/

// Example of nested if-else statement
#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if(score >= 90) {
        cout << "Grade: A" << endl;
    } else if(score >= 80) {
        cout << "Grade: B" << endl;
    } else if(score >= 70) {
        cout << "Grade: C" << endl;
    } else if(score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;
}