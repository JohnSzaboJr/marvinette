#include <stdio.h>
#include "colors.h"

int		ft_iterative_factorial(int nb);

int main(void)
{
    int n;

    n = ft_iterative_factorial(0);
    if (n == 1)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}