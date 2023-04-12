#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[50];

    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    printf("Type a number: ");
    scanf("%s", &s);

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}