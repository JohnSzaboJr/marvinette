#include <stdio.h>
#include "colors.h"

void ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 12;
    b = -5678;
    ft_swap(&a, &b);
    if (a == -5678 && b == 12)
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}