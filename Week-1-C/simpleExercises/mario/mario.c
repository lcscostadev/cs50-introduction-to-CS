#include <stdio.h>

int get_size()
{
    int size;
    do
    {
        printf("Enter the size of the grid (must be positive): ");
        scanf("%d", &size);
    } while (size <= 0);
    return size;
}

void grid_print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

void print_blocks()
{
    int size = get_size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    printf("Printing a 3x3 block:\n");
    grid_print(3);

    printf("\nPrinting a 4x4 block:\n");
    grid_print(4);

    printf("\nPrinting inner and outer loops with user-defined size:\n");
    print_blocks();

    return 0;
}
