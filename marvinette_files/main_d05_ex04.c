#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "colors.h"

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char *dst;

    if (!(dst = (char *)malloc(3 * sizeof(char))))
    {
        printf("malloc error in test\n");
        return (0);
    }
    dst = ft_strncpy(dst, "soMe 5.xt", 2);
    if (!strcmp(dst, "so"))
        printf(BOLDGREEN "OK\n" RESET);
    else
        return (1);
    return (0);
}