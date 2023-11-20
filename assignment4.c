#include<stdio.h>
int main()
{
   int n;
   float sum = 0.0;

    printf("Enter your integers number:");
    scanf("%d",&n);
    float arr[n];

    printf("Enter your integers:\n");
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
        sum +=arr[i];
    }
    float avarage = sum/n;

    printf("The avarage number is:%.2f",avarage);
}
