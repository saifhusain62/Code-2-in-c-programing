#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number of array:");
    scanf("%d",&n);
    int A[n];

    printf("Enter the element of %d array:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n; i+=2){
        A[i]=0;
    }
    printf("Modified array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ", A[i]);
    }

}
