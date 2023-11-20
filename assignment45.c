#include <stdio.h>

int main() {

    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);


    for (int i = 0; inputString[i] != '\0' && inputString[i] != '\n'; i++) {

        if (inputString[i] >= 'A' && inputString[i] <= 'Z') {

            inputString[i] = inputString[i] + ('a' - 'A');
        }

        else if (inputString[i] >= 'a' && inputString[i] <= 'z') {

            inputString[i] = inputString[i] - ('a' - 'A');
        }

    }


    printf("String with toggled case: %s\n", inputString);

    return 0;
}

