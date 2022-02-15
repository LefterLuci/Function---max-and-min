#include <stdio.h>
#include <stdlib.h>

int maxmin(int x, int y)
{
    if (x>y)
    {
        printf("%d is bigger than %d",x,y);
    }
    else
    {
        printf("%d is bigger than %d",y,x);
    }
    return;
}

int main()
{
    int num1, num2;

    printf("Please enter 2 numbers to find which one is bigger:\n");
    scanf("%d%d",&num1,&num2);

    printf("%d%d",maxmin(num1,num2));

    return 0;
}
