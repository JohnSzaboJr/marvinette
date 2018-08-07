#include <stdio.h>
#include "colors.h"

int ft_is_prime(int nb);

int main(void)
{
    int n;

    n = ft_is_prime(-2);
    if (n == 0)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}