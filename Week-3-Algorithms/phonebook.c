#include <stdio.h>
#include <string.h>

typedef struct
{
    /* data */
    char *name;
    char *number;
    char *address;
} person;

int main(void)
{
    person people[2];
    people[0].name = "Lucas";
    people[0].number = "+1-612-234-1000";

    people[1].name = "David";
    people[1].number = "1-432-523-2000";

    int n = sizeof(people) / sizeof(person);
    char name[50];
    printf("Name: ");
    scanf("%s", &name);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
