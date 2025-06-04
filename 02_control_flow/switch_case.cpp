/*
    ! 🔄 Switch-Case in C++

    The `switch` statement allows you to run different blocks of code based on the value of a variable.

    * Used instead of multiple `if-else` statements
    * Compares a value against multiple `case` labels
    * Executes matching case block
    * `break` prevents fall-through
    * `default` runs if no match is found

    Best for handling multiple known values of a single variable.
*/

#include <iostream>
using namespace std;

int main() {
    
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break; //! Prevents fall-through to the next case
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl; // Default case
    }

    return 0;
}
