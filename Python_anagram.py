def is_anagram(str1, str2):
    # Remove spaces and convert to lowercase
    str1 = str1.replace(" ", "").lower()
    str2 = str2.replace(" ", "").lower()

    # Check if lengths are equal
    if len(str1) != len(str2):
        return False

    # Sort the characters in both strings and compare
    return sorted(str1) == sorted(str2)

# Example usage
str1 = "listen"
str2 = "silent"
print("Are '{}' and '{}' anagrams?".format(str1, str2), is_anagram(str1, str2))
