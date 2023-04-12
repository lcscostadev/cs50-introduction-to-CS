#include <stdio.h>

float average(int length, int array[]);
const int n = 3;

int main(void)
{

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Scores: ");
    }

    printf("Average: %i\n", average(N, scores));
}

float average(int length, int array[])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum / (float)length;
}