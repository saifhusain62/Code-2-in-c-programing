#include <stdio.h>

int main() {
    int n, m;


    printf("Enter the size of array A: ");
    scanf("%d", &n);


    int arrA[n];


    printf("Enter %d elements for array A:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }


    printf("Enter the size of array B: ");
    scanf("%d", &m);


    int arrB[m];


    printf("Enter %d elements for array B:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }


    for (int i = 0; i < n && i < m; i++) {
        int temp = arrA[i];
        arrA[i] = arrB[i];
        arrB[i] = temp;
    }


    printf("\nThe final array A is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrA[i]);
    }

    printf("\nThe final array B is: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", arrB[i]);
    }

    return 0;
}

