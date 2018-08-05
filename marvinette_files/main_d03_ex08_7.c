#include <stdio.h>
#include <stdlib.h>
#include "colors.h"

int ft_atoi(char *str);

int main(void)
{
    if (ft_atoi("-2147483648") == atoi("-2147483648"))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}