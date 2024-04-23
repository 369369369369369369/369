def sum_of_digits(number):
    # Function to calculate the sum of digits of a number
    while number >= 10:
        sum_digits = 0
        while number > 0:
            digit = number % 10
            sum_digits += digit
            number //= 10
        number = sum_digits
    return number

def main():
    # Get user input for the number of hours
    num_hours = int(input("Enter the number of hours: "))

    current_hour = 1  # Start from 1st hour
    sum_digits_result = 0
    while True:
        # Get the sum of digits for every 3rd hour
        if current_hour % 3 == 0:
            sum_digits = sum_of_digits(current_hour)
            sum_digits_result += sum_digits
            print(f"Time: {current_hour:02}:00, Sum of Digits: {sum_digits}")

        # Check if reached the desired number of hours
        if current_hour >= num_hours:
            break

        # Increment current_hour by 1
        current_hour += 1

    # Calculate the sum of digits until a single digit is reached
    final_result = sum_of_digits(sum_digits_result)
    print(f"\nThe sum of digits for every 3rd hour until {num_hours} hours is: {final_result}")

if __name__ == "__main__":
    main()
