#include<stdio.h>
int main()
{
    int n,number,position;

    printf("Enter the number of Array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the %d number of Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Number to insert:");
    scanf("%d",&number);

    printf("Enter the position to insert:");
    scanf("%d",&position);

    if(position<0 || position>n){
        printf("Invalid Position\n");
        return 1;
    }
    for(int i = n;i>position;i--){
        arr[i] = arr[i-1];
    }
    arr[position] = number;

    printf("Modified Array:");
    for(int i = 0;i<=n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
