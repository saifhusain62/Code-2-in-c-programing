#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Your array number:");
    scanf("%d",&n);
    int arr1[n];

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[n]);
    }
    printf("Enter the elements of the second array:\n");
    int arr2[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr2[n]);
    }
    int sumarray[n];
    for(i=0;i<n;i++){
     sumarray[i] = arr1[i] + arr2[i];
    }
    printf("Sum of the array is:\n");

    for(i=0;i<n;i++){
        printf("%d", sumarray[i]);
    }

}
