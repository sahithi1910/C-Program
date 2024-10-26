#include <stdio.h>

int sum(int k);

int main() {
    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    int result = sum(k); // Call the sum function
    printf("Sum from 0 to %d is: %d\n", k, result); // Print the result

    return 0; // Indicate successful completion
}

int sum(int k) {
    int result = 0; // Initialize result
    int i = 0; // Initialize counter

    while (i <= k) {
        result += i; // Add current value of i to result
        i++; // Increment i
    }

    return result; // Return the computed sum
}