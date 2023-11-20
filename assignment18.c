#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of the A array:");
    scanf("%d",&n);

    int A[n];
    printf("Enter the A Array:");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    printf("Enter the number of the B Array:");
    scanf("%d",&m);
    int B[m];
    printf("Enter the array B:");
    for(int j=0;j<m;j++){
        scanf("%d",&B[j]);
    }
    printf("Intersection array is:");
    int inter = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i]==B[j]){
                printf("%d",A[i]);
                inter = 1;
                break;
            }
        }
    }
    if(!inter){
        printf("Empty Set.");
    }

    return 0;

}
