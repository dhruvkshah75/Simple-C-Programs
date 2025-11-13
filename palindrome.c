#include <stdio.h>
#include <string.h>
#include <ctype.h> 


int isPalindrome(const char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (tolower(s[left]) != tolower(s[right])) {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

int main() {
    char inputString[256]; 

    printf("Enter a string to check: ");
    if (fgets(inputString, sizeof(inputString), stdin)) {
        inputString[strcspn(inputString, "\n")] = 0;
        if (isPalindrome(inputString)) {
            printf("Result: \"%s\" is a palindrome.\n", inputString);
        } else {
            printf("Result: \"%s\" is NOT a palindrome.\n", inputString);
        }
    }

    return 0;
}