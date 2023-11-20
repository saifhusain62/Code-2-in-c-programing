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

    int A[m][n], B[m][n], C[m][n];


    printf("Enter %d x %d integers for matrix A:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter %d x %d integers for matrix B:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }


    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }


    printf("Resultant matrix C (C = A + B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

