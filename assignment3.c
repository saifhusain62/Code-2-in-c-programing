#include<stdio.h>
int main()
{
    int n,sum;

    printf("Enter your integers number:");
    scanf("%d",&n);

    int arr[n];

    printf("Your integers %d\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2 ==0){

            sum +=arr[i];
        }

    }
     printf("The sum of the array:%d\n",sum);
}
