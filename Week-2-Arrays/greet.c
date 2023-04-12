#include <stdio.h>

int main(int argc, int argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s", argv[1]);
    }
    else
    {
        printf("Hello, World!");
    }
}