#include <iostream>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    // Base cases: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Input from the user
    std::cout << "Enter the value of n for the Fibonacci series: ";
    std::cin >> n;

    // Check for non-negative input
    if (n < 0) {
        std::cerr << "Fibonacci series is not defined for negative numbers." << std::endl;
        return 1; // Return an error code
    }

    // Display the Fibonacci series up to the nth term
    /*std::cout << "Fibonacci series up to the " << n << "th term: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";*/
    //}

    std::cout << std::endl;

    return 0;
}
