#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer\n");
    scanf("%d",&n);
    if(-100<n<100)
    {
        printf("\n\nHello, Welcome to the world of Programming.");
    }

    else
    {
        printf("\n\nYou are not suitable for programming work. Better luck next time");
        return 0;
    }
}