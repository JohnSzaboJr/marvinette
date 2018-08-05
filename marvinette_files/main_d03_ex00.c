#include <stdio.h>
#include "colors.h"

void ft_ft(int *nbr);

int main(void)
{
    int n;

    n = 1;
    ft_ft(&n);
    if (n == 42)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}