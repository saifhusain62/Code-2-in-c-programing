#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = n; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
