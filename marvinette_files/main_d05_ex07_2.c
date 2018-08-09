#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    if (strncmp("SomeThing Here675%%%^^^", "SomeThing Heredkl675%%%^^^", 3) ==
    ft_strncmp("SomeThing Here675%%%^^^", "SomeThing Heredkl675%%%^^^", 3))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}