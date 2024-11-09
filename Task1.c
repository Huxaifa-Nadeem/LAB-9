#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_WORDS 5
#define MAX_LENGTH 20

bool isPalindrome(char word[]) {
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char words[MAX_WORDS][MAX_LENGTH + 1];
    printf("Enter %d words (max length %d characters each):\n", MAX_WORDS, MAX_LENGTH);

    // Input words
    for (int i = 0; i < MAX_WORDS; i++) {
        printf("Word %d: ", i + 1);
        scanf("%20s", words[i]);
    }

    // Check each word for palindrome
    for (int i = 0; i < MAX_WORDS; i++) {
        if (isPalindrome(words[i])) {
            printf("Word %d (%s): Palindrome\n", i + 1, words[i]);
        } else {
            printf("Word %d (%s): Not Palindrome\n", i + 1, words[i]);
        }
    }

    return 0;
}
