#include <stdio.h>

// Function to calculate n raised to the power of p
int power(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to count the number of digits in a number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    
    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &number);

    int originalNumber = number;
    int sumOfPowers = 0;
    int numDigits = countDigits(number);

    // Calculate the sum of each digit raised to the power of numDigits
    while (number != 0) {
        int digit = number % 10;
        sumOfPowers += power(digit, numDigits);
        number /= 10;
    }

    // Check if the sum equals the original number
    if (originalNumber == sumOfPowers) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}


