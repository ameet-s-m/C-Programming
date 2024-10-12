#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter 2 Integers");
    scanf("%d%d",&a,&b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}