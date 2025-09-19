#include <stdio.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Input: ");
    scanf(" %[^\n]", str);  

    printf("Output: Number of vowels: %d\n", countVowels(str));

    return 0;
}
