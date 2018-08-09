#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char *dst;

    if (!(dst = (char *)malloc(10 * sizeof(char))))
    {
        printf("malloc error in test\n");
        return (0);
    }
    dst = ft_strcpy(dst, "");
    if (!strcmp(dst, ""))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}