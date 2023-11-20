#include <stdio.h>

int main() {

    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);


    int vowelCount = 0;
    for (int i = 0; inputString[i] != '\0' && inputString[i] != '\n'; i++) {

        if (inputString[i] == 'a' || inputString[i] == 'e' || inputString[i] == 'i' ||
            inputString[i] == 'o' || inputString[i] == 'u' || inputString[i] == 'A' ||
            inputString[i] == 'E' || inputString[i] == 'I' || inputString[i] == 'O' ||
            inputString[i] == 'U') {
            vowelCount++;
        }
    }

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}

