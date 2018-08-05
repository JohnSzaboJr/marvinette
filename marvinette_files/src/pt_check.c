#include <stdlib.h>
#include <fcntl.h>
#include "../libft/libft.h"
#include "../colors.h"
#include "../marvinette.h"

int	pt_check_folder(char *name, char *name2)
{
	int fd;
	char *line;

	line = NULL;
	ft_printf(BOLDCYAN "%s\n\n" RESET, name);
	ft_printf("Exercise folder: ");
	fd = open(name2, O_RDONLY);
	get_next_line(fd, &line);
	if (fd > 0 && !line)
		ft_printf(BOLDGREEN "OK\n" RESET);
	else
	{
		ft_printf(BOLDRED "Not found\n" RESET);
		return (0);
	}
	close(fd);
	if (line)
		free(line);
	return (1);
}

int	pt_check_file(char *name)
{
	int fd;

	ft_printf("Exercise file: ");
	fd = open(name, O_RDONLY);
	if (fd > 0)
		ft_printf(BOLDGREEN "OK\n" RESET);
	else
	{
		ft_printf(BOLDRED "KO\n" RESET);
		return (0);
	}
	close(fd);
	return (1);
}

int	pt_check_compil(char *name)
{
	int status;

	ft_printf("Compilation: ");
	status = system(name);
	if (!status)
		ft_printf(BOLDGREEN "OK\n" RESET);
	else
	{
		ft_printf(BOLDRED "Does not compile\n" RESET);
		return (0);
	}
	return (1);
}

int	pt_test1(void)
{
	int fd;

	ft_printf("Test: ");
	fd = system("./marvinette_files/test1");
	if (fd != 0)
		ft_printf(BOLDRED "KO\n" RESET);
	return (1);
}

int	pt_test_print1(char *good)
{
	int	fd;
	char *line;

	ft_printf("Test: ");
	fd = system("./marvinette_files/test1 > ./marvinette_files/user_output");
	if (fd != 0)
		ft_printf(BOLDRED "KO\n" RESET);
	else
	{
		system(good);
		system("diff ./marvinette_files/user_output \
		./marvinette_files/good_output > ./marvinette_files/output_diff");
		fd = open("./marvinette_files/output_diff", O_RDONLY);
		get_next_line(fd, &line);
		if (ft_strlen(line))
			ft_printf(BOLDRED "KO\n" RESET);
		else
			ft_printf(BOLDGREEN "OK\n" RESET);
	}
	if (line)
		free(line);
	close(fd);
	return (1);
}