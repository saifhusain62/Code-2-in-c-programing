#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the input number:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter your integers:%d\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        sum +=arr[i];
    }
    printf("Sum of the integers:%d",sum);
}
