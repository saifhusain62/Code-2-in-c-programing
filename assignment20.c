
#include <stdio.h>

int main() {
    int n, m;


    printf("Enter the size of array A: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d integers for array A:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of array B: ");
    scanf("%d", &m);


    int B[m];
    printf("Enter %d positive integers for array B:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    printf("Difference of arrays A and B (A - B):\n");

    for (int i = 0; i < n; i++) {
        int isPresentInB = 0;
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                isPresentInB = 1;
                break;
            }
        }
        if (!isPresentInB) {
            printf("%d ", A[i]);
        }
    }

    return 0;
}
