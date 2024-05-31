#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAnagram(const char *str1, const char *str2) {
    int freq[26] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Remove spaces and convert to lowercase
    for (int i = 0; i < len1; i++) {
        if (!isspace(str1[i])) {
            freq[tolower(str1[i]) - 'a']++;
        }
    }

    for (int i = 0; i < len2; i++) {
        if (!isspace(str2[i])) {
            freq[tolower(str2[i]) - 'a']--;
        }
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0;  // Not anagrams
        }
    }

    return 1;  // Anagrams
}

int main() {
    const char *str1 = "listen";
    const char *str2 = "silent";
    printf("Are '%s' and '%s' anagrams? %s\n", str1, str2, isAnagram(str1, str2) ? "Yes" : "No");
    return 0;
}
