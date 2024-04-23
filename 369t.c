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
    int num_hours;
    
    // Get user input for the number of hours
    printf("Enter the number of hours: ");
    scanf("%d", &num_hours);

    int current_hour = 1;
    int sum_digits_result = 0;
    
    while (1) {
        // Get the sum of digits for every 3rd hour
        if (current_hour % 3 == 0) {
            int sum_digits = sum_of_digits(current_hour);
            sum_digits_result += sum_digits;
            printf("Time: %02d:00, Sum of Digits: %d\n", current_hour, sum_digits);
        }

        // Check if reached the desired number of hours
        if (current_hour >= num_hours) {
            break;
        }

        // Increment current_hour by 1
        current_hour++;
    }

    // Calculate the sum of digits until a single digit is reached
    int final_result = sum_of_digits(sum_digits_result);
    printf("\nThe sum of digits for every 3rd hour until %d hours is: %d\n", num_hours, final_result);

    return 0;
}
