/* 
    ! Nested Loops Example
    * A nested loop is a loop inside another loop. In C++, you can use nested loops to perform operations on multi-dimensional data structures, such as matrices.
    * The syntax is similar to a regular loop, but you place one loop inside another.
    * The outer loop controls the number of iterations for the inner loop, and the inner loop executes completely for each iteration of the outer loop.
    * This is useful for tasks like iterating through rows and columns of a matrix or performing operations on pairs of elements.
    *  It is important to ensure that the inner loop has a proper termination condition to avoid infinite loops.
*/

// TODO : Here is an example of a nested loop that prints a multiplication table:

#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows in the multiplication table
    int cols = 5; // Number of columns in the multiplication table

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= cols; j++) {
            cout << i * j << "\t"; // Print the product of i and j
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}