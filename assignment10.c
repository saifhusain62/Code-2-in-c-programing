#include<stdio.h>
int main()
{
    int n,searchnumber;

    printf("Enter the number of array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the array you want:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the number you search:");
    scanf("%d",&searchnumber);

    int numbercount = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==searchnumber){
            printf("Number found:%d",i);
            numbercount++;
        }

    }
    if(numbercount ==0){
        printf("NOT FOUND");
    }

    printf("\n");

}
