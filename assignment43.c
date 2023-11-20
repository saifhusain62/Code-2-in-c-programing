#include <stdio.h>
#include <stdbool.h>


bool isSpaceOrNewline(char c) {
    return (c == ' ' || c == '\n');
}

int main() {

    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);


    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; inputString[i] != '\0' && inputString[i] != '\n'; i++) {

        if (isSpaceOrNewline(inputString[i])) {
            inWord = false;
        } else if (!inWord) {

            inWord = true;
            wordCount++;
        }
    }


    printf("Number of words in the string: %d\n", wordCount);

    return 0;
}

