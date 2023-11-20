#include <stdio.h>

int main() {
    int m, n, i, j;


    printf("Enter the number of rows (m): ");
    scanf("%d", &m);

    printf("Enter the number of columns (n): ");
    scanf("%d", &n);


    if (m <= 0 || n <= 0) {
        printf("Please enter valid dimensions.\n");
        return 1;
    }

    int matrix[m][n];


    printf("Enter %d x %d integers for the matrix:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (j = 0; j < n / 2; j++) {
        for (i = 0; i < m; i++) {

            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - 1 - j];
            matrix[i][n - 1 - j] = temp;
        }
    }


    printf("Reversed matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

