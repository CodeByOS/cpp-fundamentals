/*
    ! Do-While Loop in C++
    * A do-while loop in C++ is similar to a while loop, but it guarantees that the code block will be executed at least once before checking the condition.
    * The syntax is:
        do {
        *   // code to be executed
        } while (condition);
    * The code inside the do block is executed first, and then the condition is checked.
    * If the condition evaluates to true, the loop continues; otherwise, it exits.
    * This is useful when you want to ensure that the code runs at least once, regardless of the condition.
    * It is important to ensure that the condition will eventually become false to avoid an infinite loop.
    */

//TODO: Example of a do-while loop that prints numbers from 1 to 5

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Number: " << i << endl;
        i++;
    } while (i <= 5);

    return 0;
}