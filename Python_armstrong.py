def is_armstrong(num):
    num_str = str(num)
    num_digits = len(num_str)
    armstrong_sum = sum(int(digit) ** num_digits for digit in num_str)
    return armstrong_sum == num

# Example usage
num = 153
print(num, "is an Armstrong number?", is_armstrong(num))
