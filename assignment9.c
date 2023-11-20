#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    char  arr[n];

    printf("Enter the %d element of array:",n);
    for(int i=0;i<n;i++){
        scanf(" %c", &arr[i]);
    }
    int vowelcount = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]=='A' || arr[i]=='a' ||
           arr[i]=='E' || arr[i]=='e' ||
            arr[i]=='I' || arr[i]=='i' ||
            arr[i]=='O' || arr[i]=='o' ||
            arr[i]=='U' || arr[i]=='u')
        {
          vowelcount++;
        }
    }
    printf("Count: %d\n",vowelcount);
}
