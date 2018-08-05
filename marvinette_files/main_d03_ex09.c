#include <stdio.h>
#include <string.h>
#include "colors.h"

void ft_sort_integer_table(int *tab, int size);

int main(void)
{
    int i;
    int array[20] = {768, -245, 15, 0, 400, 2};

    i = 0;
    ft_sort_integer_table(array, 6);
    while (i < 5)
    {
        if (array[i] > array[i + 1])
            return (1);
        i++;
    }
    printf(BOLDGREEN "OK\n" RESET);
    return (0);
}