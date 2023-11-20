#include<stdio.h>
 void bubble(int A[],int n){

    for(int i=0 ; i<n-1;i++){
        for(int j=0 ; j<n-i-1;j++){

            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }



 }

 int main()
 {
     int n;

     printf("Enter the number of the array:");
     scanf("%d",&n);
     int A[n];

     printf("Enter the array you want:");
     for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
     }
     bubble(A,n);
     printf("Sorted array is:\n");
     for(int i=0;i<n;i++){
        printf("%d" , A[i]);
     }



 }
