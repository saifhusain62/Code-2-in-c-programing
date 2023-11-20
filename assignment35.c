#include <stdio.h>

int main() {
    int m, n, i, j;


    printf("Enter the number of rows (m): ");
    scanf("%d", &m);

    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int array[m][n];


    printf("Enter %d x %d integers for the matrix:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Row-wise: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
    }


    printf("\nColumn-wise: ");
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            printf("%d ", array[i][j]);
        }
    }

    printf("\n");

    return 0;
}

