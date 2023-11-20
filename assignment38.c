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


    printf("Enter %d x %d positive integers for the matrix:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);


            if (matrix[i][j] <= 0) {
                printf("Please enter positive integers only.\n");
                return 1;
            }
        }
    }


    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                for (int l = 0; l < n; l++) {
                    if ((i != k || j != l) && matrix[i][j] == matrix[k][l]) {
                        matrix[k][l] = -1;
                    }
                }
            }
        }
    }


    printf("Modified matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

