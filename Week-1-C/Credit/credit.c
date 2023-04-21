#include <stdio.h>

int main(void)
{
    long card_number;
    long card_copy = card_number;

    printf("Type your credit card number: ");
    scanf("%li", &card_number);

    int sum = 0, num_digits = 0, digit, double_digits;

    while (card_number > 0)
    {
        num_digits++;
        // a way of getting the last number of the long card_number variable
        digit = card_number % 10;
        card_number /= 10;

        // if is on a even position AKA second last position
        if (num_digits % 2 == 0)
        {
            // multiply digits by 2
            double_digits = digit * 2;
            // so the algorithm explicity says that if the double digits sum is bigger then 9 we need to -9
            sum += (double_digits > 9) ? (double_digits - 9) : double_digits;
        }
        else
        {
            sum += digit;
        }
    }

    if (sum % 10 == 0 && card_copy >= 340000000000000 && card_copy < 350000000000000)
    {
        printf("%li \n", card_copy);
        printf("AMERICAN EXPRESS\n");
    }
    else if (sum % 10 == 0 && card_copy >= 370000000000000 && card_copy < 380000000000000)
    {
        printf("%li \n", card_copy);
        printf("AMERICAN EXPRESS\n");
    }
    else if (sum % 10 == 0 && card_copy >= 5100000000000000 && card_copy < 5600000000000000)
    {
        printf("%li \n", card_copy);
        printf("MASTERCARD\n");
    }
    else if ((card_copy >= 4000000000000 && card_copy < 5000000000000) ||
             (card_copy >= 4000000000000000 && card_copy < 5000000000000000))
    {
        printf("%li \n", card_copy);
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}