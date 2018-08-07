#include <stdio.h>
#include "colors.h"

int     ft_recursive_factorial(int nb);

int main(void)
{
    int n;

    n = ft_recursive_factorial(13);
    if (n == 0)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}