#include <stdio.h>

int main() {

    char firstString[1000], secondString[1000];

    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);

    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);


    int i = 0, j = 0;

    while (firstString[i] != '\0' && firstString[i] != '\n') {
        i++;
    }

    while (secondString[j] != '\0' && secondString[j] != '\n') {
        firstString[i] = secondString[j];
        i++;
        j++;
    }


    firstString[i] = '\0';


    printf("Concatenated string: %s\n", firstString);

    return 0;
}

