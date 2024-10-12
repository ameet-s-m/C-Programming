#include <stdio.h>

int main()
{
    int a=4,b=5;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("a=%d\n",*p1);
    printf("b=%d\n",*p2);
}