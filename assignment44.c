#include <stdio.h>

int main() {

    char inputString[1000];

    printf("Enter a lowercase string: ");
    fgets(inputString, sizeof(inputString), stdin);


    for (int i = 0; inputString[i] != '\0' && inputString[i] != '\n'; i++) {

        if (inputString[i] >= 'a' && inputString[i] <= 'z') {

            inputString[i] = inputString[i] - ('a' - 'A');
        }
    }


    printf("Uppercase string: %s\n", inputString);

    return 0;
}

