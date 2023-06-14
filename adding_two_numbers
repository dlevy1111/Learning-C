#include <stdio.h>

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int a, b, output;
    int *ptro = &output;
    printf("enter a value to be the first addend: ");
    scanf("%d", &a);
    printf("enter a value to be the second addend: ");
    scanf("%d", &b);
    printf("a = %d\nb = %d\n", a, b);

    output = add(a, b);
    printf("output = %d\n", output);

    printf("address of a (from the pointer): %p\n", ptro);
    printf("address of a (from &output): %p\n", &output);

    printf("value that is being pointed to (from the pointer) (which should be equal to output): %d", *ptro);

    return 0;
}
