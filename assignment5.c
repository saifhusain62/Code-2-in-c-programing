#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter your Number:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the element of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i+=2){
            sum +=arr[i];

    }
    printf("Sum of the elements is:%d\n",sum);



}
