#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    int vowelCount = 0;

    printf("Enter a string: ");
    scanf("%c", &inputString);  // Input the string

    for (int i = 0; inputString[i] != '\0'; i++) {
        char ch = tolower(inputString[i]); // Convert character to lowercase for case insensitivity
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
