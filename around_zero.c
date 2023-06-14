#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculate_absolute_value(int value)
{
    if (value < 0)
    {
        value = abs(value);
    }
    return value;
}

int main()
{
    int the_number_in_question;
    printf("give me a number please: ");
    scanf("%d", &the_number_in_question);
    if (the_number_in_question < 0)
    {
        printf("your number is less than 0\n");
    }
    else if (the_number_in_question > 0)
    {
        printf("your number is greater than 0\n");
    }
    else
    {
        printf("your number is 0\n");
    }

    printf("and is %d units away from 0", calculate_absolute_value(the_number_in_question));

    return 0;
}
