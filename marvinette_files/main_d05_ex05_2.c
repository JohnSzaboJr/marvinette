#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

char    *ft_strstr(char *str, char *to_find);

int main(void)
{
    if (!(ft_strstr("SomeThing Here675%%%^^^", "Anatolia")))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}