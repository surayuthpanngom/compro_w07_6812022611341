#include <stdio.h> // Include standard input/output library

int main() {
    int x, y; // Declare two integer variables x and y

    // Prompt the user to enter two numbers
    printf("Please enter the first number (x): ");
    scanf("%d", &x); // Read the first number and store it in x

    printf("Please enter the second number (y): ");
    scanf("%d", &y); // Read the second number and store it in y

    // Compare the two numbers using an if-else if-else structure
    if (x > y) {
        // If x is greater than y, print this message
        printf("x  is greater than y \n", x, y);
    } else if (x < y) {
        // If x is less than y, print this message
        printf("x  is less than y \n", x, y);
    } else {
        // If the numbers are not greater or less, they must be equal
        printf("x  is equal to y \n", x, y);
    }

    return 0; // Return 0 to indicate successful execution
}
