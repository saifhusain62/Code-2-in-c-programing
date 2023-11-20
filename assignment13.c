#include<stdio.h>
int main()
{
    int n,position;

    printf("Enter the value of integer:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter your array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the position you delete:");
    scanf("%d",&position);

    if(position<0 || position>=n){
        printf("Invalid,position.");

        return 1;
    }

    for(int i=position;i<n;i++){
        arr[i]= arr[i+1];
    }
    n--;

    printf("updated array.....is:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}
