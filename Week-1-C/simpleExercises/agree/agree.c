#include <stdio.h>

int main(void)
{
    char yes, no;

    printf("Do you agree? ");
    scanf("%c %c", &yes, &no);

    if (yes == 'y' || yes == 'Y')
    {
        printf("Agreed\n");
    }
    else if (no == 'n' || no == 'N')
    {
        printf("Agreed\n");
    }
}