#include <stdio.h>

int main() {
    int n, i, j;


    printf("Enter the value of n (must be odd): ");
    scanf("%d", &n);


    if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
        return 1;
    }


    for (i = 1; i <= n / 2 + 1; i++) {

        for (j = 1; j <= n / 2 + 1 - i; j++) {
            printf("_");
        }


        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }


    for (i = n / 2; i >= 1; i--) {

        for (j = 1; j <= n / 2 + 1 - i; j++) {
            printf("_");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

