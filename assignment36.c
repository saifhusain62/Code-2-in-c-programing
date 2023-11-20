#include <stdio.h>

int main() {
    int size, i, j;


    printf("Enter the size of the identity matrix: ");
    scanf("%d", &size);


    if (size <= 0) {
        printf("Please enter a positive integer for the size.\n");
        return 1;
    }

    int identityMatrix[size][size];


    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j) {
                identityMatrix[i][j] = 1;
            } else {
                identityMatrix[i][j] = 0;
            }
        }
    }


    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", identityMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

