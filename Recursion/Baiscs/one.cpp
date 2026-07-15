#include <iostream>
using namespace std;

/*
 * RECURSION DEFINITION:
 * Recursion is a programming technique where a function calls itself directly or indirectly.
 * A recursive function must have:
 * 1. Base Case: A condition that stops the recursion
 * 2. Recursive Case: The function calling itself with modified parameters
 * 
 * Advantages:
 * - Makes code cleaner and more readable for certain problems
 * - Naturally suits problems with recursive structure (trees, graphs, divide & conquer)
 * 
 * Disadvantages:
 * - Uses more memory due to function call stack
 * - Can be slower than iterative solutions
 * - Risk of stack overflow if base case is not proper
 */

// Example 1: Simple program to calculate factorial using recursion
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

// Example 2: Print numbers from n to 1 using recursion
void printNumbers(int n) {
    // Base case: stop when n becomes 0
    if (n == 0) {
        return;
    }
    cout << n << " ";
    // Recursive call with n-1
    printNumbers(n - 1);
}

// Example 3: Calculate sum of first n natural numbers
int sumOfN(int n) {
    // Base case: sum of 1 is 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: sum(n) = n + sum(n-1)
    return n + sumOfN(n - 1);
}

int main() {
    cout << "=== RECURSION EXAMPLES ===" << endl << endl;
    
    // Example 1: Factorial
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "Factorial of 6: " << factorial(6) << endl << endl;
    
    // Example 2: Print numbers
    cout << "Numbers from 5 to 1: ";
    printNumbers(5);
    cout << endl << endl;
    
    // Example 3: Sum of first n natural numbers
    cout << "Sum of first 5 natural numbers: " << sumOfN(5) << endl;
    cout << "Sum of first 10 natural numbers: " << sumOfN(10) << endl;
    
    return 0;
}
