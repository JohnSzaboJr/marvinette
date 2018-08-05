#include <stdio.h>
#include "colors.h"

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 345;
    b = 72;
    ft_ultimate_div_mod(&a, &b);
    if (a == 4 && b == 57)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}