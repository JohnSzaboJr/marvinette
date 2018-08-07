#include <stdio.h>
#include "colors.h"

int     ft_find_next_prime(int nb);

int main(void)
{
    int n;

    n = ft_find_next_prime(-2);
    if (n == 2)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}