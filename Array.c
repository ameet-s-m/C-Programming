#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter 5 Integers into array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("5 integers in the array are:");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}