#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d the separate of the array numbers:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0,j =n-1;i<j;i++,j--){

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Reversed array:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }


}
