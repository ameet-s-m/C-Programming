#include<stdio.h>
int main()
{
    float x,y;
    char op;
    while(1)
    {
        printf("Enter the values for x and y:\n");
        scanf("%f%f",&x,&y);
        printf("Enter the operation to perform(+,-,*,/) and q to quit:\n");
        scanf("%c",&op);
        if(op=='q')
        {
            printf("Exiting the program.\n");
            break;
        }
        switch(op)
        {
            case '+':
            printf("%.2f+%.2f=%.2f\n",x,y,x+y);
            break;
            case '-':
            printf("%.2f-%.2f=%.2f\n",x,y,x-y);
            break;
            case '*':
            printf("%.2f*%.2f=%.2f\n",x,y,x*y);
            break;
            case '/':
            if(y!=0)
            {
            printf("%.2f/%.2f=%.2f",x,y,x/y);
            }
            else
            {
            printf("Division cannot be performed");
            }
            break;
            default:
            {
            printf("Invalid Operator");
            break;
            }
            }
         }
    return 0;
}
