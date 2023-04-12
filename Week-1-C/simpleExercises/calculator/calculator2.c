#include <stdio.h>

int main(void)
{
    long x, y;

    printf("x: ");
    scanf("%ld", &x);

    printf("y: ");
    scanf("%ld", &y);

    float z = (float)x / (float)y;
    printf("%f\n", z);

    return 0;
}