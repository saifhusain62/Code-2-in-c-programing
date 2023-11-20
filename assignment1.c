#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of integer:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the inegers you want:\n");
    for(int i;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Reversed order:\n");
    for(int i = n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    printf("\n");
}
