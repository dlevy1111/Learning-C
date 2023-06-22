#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *filter_list(int arr[], int size) // a more-specific, list filtering function
{
    int num_primes = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 1)
        {
            num_primes++;
        }
    }

    int *ptr = malloc(num_primes * sizeof(int));

    // int output[num_primes],
    int lastindex = 0; // lastindex is made so that we know how large the output should be. lastindex should eventually equal num_primes

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 1)
        {
            // output[lastindex] = arr[i];
            ptr[lastindex] = arr[i];
            lastindex++;
        }
    }

    return ptr;
}

int *filter_primes(int arr[], int size, int n) // a generic prime filtering function; turns all non primes into 1s, then returns the list.
{
    int stopVal = ceil(sqrt(n));

    for (int p = 2; p <= stopVal; p++) // stop at the sqrt(n) value, as per the algorithm
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % p == 0 && arr[i] != p)
            {
                arr[i] = 1; // doesn't result in multiple changes because 1 modulo p will never be 0, unless p is 1, but p will never be 1.
            }
        }
    }

    return arr;
}

int main()
{
    int n;
    printf("the sieve of eratothenese is an algorithm that helps the user find all prime numbers less than some value n\n");
    printf("what would you like to use for the value n? ");
    scanf("%d", &n);

    int numsLessThanN[n - 1], size = n - 1; // initializing variables

    for (int i = 2; i <= n; i++)
    {
        numsLessThanN[i - 2] = i;
    }

    int *outputlist = filter_primes(numsLessThanN, size, n);
    outputlist = filter_list(outputlist, size);

    // int output_size = sizeof(outputlist) / sizeof(outputlist[0]);

    for (int i = 0; i < size; i++) // i don't like this solution.
    {
        printf("%d ", outputlist[i]);
    }

    free(outputlist);

    return 0;
}
