#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of the array:");
    scanf("%d",&n);

    int A[n];

    printf("Enter  the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;){
            if(A[i]==A[j]){
                for(int k=j;k<n-1;k++){
                    A[k] = A[k+1];
                }
                n--;
            }
            else{
                j++;
            }
        }
    }
    printf("Array without duplicate:\n");
    for(int i=0;i<n;i++){
        printf("%d",A[i]);
    }

}
