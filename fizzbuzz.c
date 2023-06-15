#include <stdio.h>

const char *fizzbuzz(int integer) // recall that for fizzbuzz, we say fizz if the integer is divisible by 3, buzz if by 5, and fizzbuzz if by 3 and 5.
{
    if (integer % 5 == 0 && integer % 3 == 0)
    {
        return "fizzbuzz";
    }
    else if (integer % 5 == 0)
    {
        return "buzz";
    }
    else if (integer % 3 == 0)
    {
        return "fizz";
    }
    else
    {
        return "";
    }
}

int main()
{
    int max = 0, index;
    printf("what number would you like to stop at: ");
    scanf("%d", &max);

    for (index = 1; index <= max; index++)
    {
        printf("%d ", index);
        printf("%s\n", fizzbuzz(index));
    }

    return 0;
}
