#include <stdio.h>
#include "colors.h"

void    ft_ultimate_ft(int *********nbr);

int     main(void)
{
    int *********n;
    int ********a;
    int *******b;
    int ******c;
    int *****d;
    int ****e;
    int ***f;
    int **g;
    int *h;
    int i;

    i = 1;
    h = &i;
    g = &h;
    f = &g;
    e = &f;
    d = &e;
    c = &d;
    b = &c;
    a = &b;
    n = &a;

    ft_ultimate_ft(n);
    if (*********n == 42)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}