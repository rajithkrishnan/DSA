def is_palindrome(s):
    s = s.lower()  # Convert to lowercase
    s = ''.join(char for char in s if char.isalnum())  # Remove non-alphanumeric characters
    return s == s[::-1]  # Check if the string is equal to its reverse

# Example usage
s = "A man, a plan, a canal: Panama"
print("Is '", s, "' a palindrome?", is_palindrome(s))
