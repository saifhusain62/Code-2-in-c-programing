#include <stdio.h>

int main() {

    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);


    int length = 0;
    while (inputString[length] != '\0' && inputString[length] != '\n') {
        length++;
    }


    printf("Length of the string: %d\n", length);

    return 0;
}

