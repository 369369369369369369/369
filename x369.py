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
    # Get user input for the number
    num = int(input("Enter a number: "))
    
    # Initialize variables for sum of products and number line
    sum_digits_result = 0
    
    # Calculate and print the product of each number in the number line
    for i in range(1, num + 1):
        product = i * 3
        sum_digits = sum_of_digits(product)
        sum_digits_result += sum_digits
        print(f"{sum_digits}")
    
    final_result = sum_of_digits(sum_digits_result)
    print("Final result after summing digits:", final_result)

if __name__ == "__main__":
    main()