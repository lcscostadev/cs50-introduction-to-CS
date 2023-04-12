#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("Before: ");
    scanf("%s", s);
    printf("After: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }

    printf("\n");
    return 0;
}
