#include <stdio.h>
#include "colors.h"

int     ft_sqrt(int nb);

int main(void)
{
    int n;

    n = ft_sqrt(0);
    if (n == 0)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}