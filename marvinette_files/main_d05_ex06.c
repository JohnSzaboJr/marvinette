#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

int     ft_strcmp(char *s1, char *s2);

int main(void)
{
    if (strcmp("SomeThing Here675%%%^^^", "ere") ==
    ft_strcmp("SomeThing Here675%%%^^^", "ere"))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}