#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to divide two numbers
// QA TASK: This function crashes if 'b' is 0. 
// Fix the logic to handle division by zero safely.
float divide(int a, int b) {
    return (float)a / b; 
}

int main() {
    printf("--- System Testing: Calculator Module ---\n");
    
    // Normal operation test
    printf("Test 1 - Addition (5 + 3): %d\n", add(5, 3));
    printf("Test 2 - Division (10 / 2): %.2f\n", divide(10, 2));
    
    // Boundary value test (Currently fails)
    // printf("Test 3 - Division by Zero (10 / 0): %.2f\n", divide(10, 0));
    
    return 0;
}