#include <stdio.h>

int main() {

    char inputString[1000];
    char searchChar;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Enter a character to count: ");
    scanf("%c", &searchChar);


    int count = 0;
    for (int i = 0; inputString[i] != '\0' && inputString[i] != '\n'; i++) {

        if (inputString[i] == searchChar || (searchChar >= 'A' && searchChar <= 'Z' && inputString[i] == searchChar + ('a' - 'A')) || (searchChar >= 'a' && searchChar <= 'z' && inputString[i] == searchChar - ('a' - 'A'))) {
            count++;
        }
    }


    printf("Occurrences of '%c' in the string: %d\n", searchChar, count);

    return 0;
}

