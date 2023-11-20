#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number of the array:");
    scanf("%d",&n);

    int arrA[n],arrB[n];

    printf("Enter %d Array you want:");
    for(int i=0;i<n;i++){
        scanf("%d",&arrA[i]);
    }

    for(int i=0,j = n-1;i<n;i++,j--){
        arrB[i] = arrA[j];
    }
    printf("Array A:");
    for(int i=0;i<n;i++){
        printf("%d",arrA[i]);
    }
    printf("\n");

    printf("Array B:");
    for(int i=0;i<n;i++){
        printf("%d",arrB[i]);
    }
    printf("\n");
}
