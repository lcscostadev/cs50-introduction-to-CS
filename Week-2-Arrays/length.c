#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[20];
    printf("What is your name? ");
    scanf("s", &name);
    int n = strlen(name);
    printf("%i\n", n);
}