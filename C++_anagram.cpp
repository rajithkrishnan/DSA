#include <iostream>
#include <string>
#include <algorithm>

bool isAnagram(const std::string& str1, const std::string& str2) {
    std::string s1 = str1, s2 = str2;
    
    // Remove spaces and convert to lowercase
    s1.erase(std::remove_if(s1.begin(), s1.end(), ::isspace), s1.end());
    s2.erase(std::remove_if(s2.begin(), s2.end(), ::isspace), s2.end());
    std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    // Sort the characters in both strings and compare
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main() {
    std::string str1 = "listen";
    std::string str2 = "silent";
    std::cout << "Are '" << str1 << "' and '" << str2 << "' anagrams? ";
    std::cout << (isAnagram(str1, str2) ? "Yes" : "No") << std::endl;
    return 0;
}
