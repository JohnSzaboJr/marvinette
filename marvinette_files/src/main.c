#include <stdlib.h>
#include <fcntl.h>
#include "../libft/libft.h"
#include "../colors.h"
#include "../marvinette.h"

static void pt_header(void)
{
	system("clear");
	ft_printf("------------------------------------------\n");
	ft_printf(BOLDYELLOW "MARVINETTE v1.0\n" RESET);
	ft_printf(YELLOW "A 42 Piscine exercise tester by jszabo\n\n" RESET);
}

static int	pt_args(int argc, char **argv)
{
	char	*projects[3] =
	{"d03", "d04", 0};
	int		i;

	i = 0;
	if (argv && argc == 1)
	{
		ft_printf(BOLDRED "error: " RESET);
		ft_printf("no project name provided.\n");
		ft_printf("usage example: ./marvinette d03\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_printf(BOLDRED "error: " RESET);
		ft_printf("too many arguments provided.\n");
		ft_printf("usage example: ./marvinette d03\n");
		return (0);
	}
	while (projects[i])
	{
		if (!ft_strcmp(projects[i], argv[1]))
			return (i + 1);
		i++;
	}
	ft_printf(BOLDRED "error: " RESET);
	ft_printf("project name not recognized.\n");
	ft_printf("usage example: ./marvinette d03\n");
	return (0);
}

static int	pt_check(char *day)
{
	if (!ft_strcmp("d03", day) && !pt_check_d3())
		return (0);
	if (!ft_strcmp("d04", day) && !pt_check_d4())
		return (0);
	return (1);
}

int main(int argc, char **argv)
{
	pt_header();
	if (!(pt_args(argc, argv)) || !pt_check(argv[1]))
		return (1);
	return (0);
}
	