#include <stdio.h>
#include "colors.h"

 void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 413;
    b = 7;
    div = 0;
    mod = 0;
    ft_div_mod(a, b, &div, &mod);
    if (div == 59 && mod == 0)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}