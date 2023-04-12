#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("What's x?\n");
    scanf("%d", &x);
    printf("What's y?\n");
    scanf("%d", &y);

    if (y > x)
    {
        printf("y is bigger than x");
    }
    else if (y < x)
    {
        printf("x is greater than y");
    }
    else
    {
        printf("x and y are equals");
    }
}