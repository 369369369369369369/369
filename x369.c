#include <stdio.h>

int sum_of_digits(int number) {
    // Function to calculate the sum of digits of a number
    while (number >= 10) {
        int sum_digits = 0;
        int temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            sum_digits += digit;
            temp /= 10;
        }
        number = sum_digits;
    }
    return number;
}

int main() {
    // Get user input for the number
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Initialize variables for sum of products and number line
    int sum_digits_result = 0;

    // Calculate and print the product of each number in the number line
    for (int i = 1; i <= num; ++i) {
        int product = i * 3;
        int sum_digits = sum_of_digits(product);
        sum_digits_result += sum_digits;
        printf("%d\n", sum_digits);
    }

    int final_result = sum_of_digits(sum_digits_result);
    printf("Final result after summing digits: %d\n", final_result);

    return 0;
}