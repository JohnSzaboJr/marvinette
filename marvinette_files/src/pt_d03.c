#include <stdlib.h>
#include <fcntl.h>
#include "../libft/libft.h"
#include "../colors.h"
#include "../marvinette.h"

int	pt_check_d3_ex00(void)
{
	if (!pt_check_folder("EX00", "ex00"))
		return (0);
	if (!pt_check_file("ex00/ft_ft.c"))
		return (0);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex00.c \
	./ex00/ft_ft.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int	pt_check_d3_ex01(void)
{
	ft_printf("\n");
	if (!pt_check_folder("EX01", "ex01"))
		return (0);
	if (!pt_check_file("ex01/ft_ultimate_ft.c"))
		return (0);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex01.c \
	./ex01/ft_ultimate_ft.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int pt_check_d3_ex02(void)
{
	ft_printf("\n");
	if (!pt_check_folder("EX02", "ex02"))
		return (0);
	if (!pt_check_file("ex02/ft_swap.c"))
		return (0);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex02.c \
	./ex02/ft_swap.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int	pt_check_d3_ex03(void)
{
	ft_printf("\n");
	if (!pt_check_folder("EX03", "ex03"))
		return (0);
	if (!pt_check_file("ex03/ft_div_mod.c"))
		return (0);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex03.c \
	./ex03/ft_div_mod.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int	pt_check_d3_ex04(void)
{
	ft_printf("\n");
	if (!pt_check_folder("EX04", "ex04"))
		return (0);
	if (!pt_check_file("ex04/ft_ultimate_div_mod.c"))
		return (0);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex04.c \
	./ex04/ft_ultimate_div_mod.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int	pt_check_d3_ex05(void)
{
	ft_printf("\n");
	if (!pt_check_folder("EX05", "ex05"))
		return (0);
	if (!pt_check_file("ex05/ft_putstr.c"))
		return (0);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex05.c ./marvinette_files/libft/ft_putchar.c\
	./ex05/ft_putstr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test_print1("./marvinette_files/testd03ex05 > \
	./marvinette_files/good_output");
	return (1);
}

int	pt_check_d3_ex06(void)
{
	int i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX06", "ex06"))
		return (0);
	if (!pt_check_file("ex06/ft_strlen.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex06.c \
	./ex06/ft_strlen.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex06_2.c \
	./ex06/ft_strlen.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex06_3.c \
	./ex06/ft_strlen.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d3_ex07(void)
{
	int i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX07", "ex07"))
		return (0);
	if (!pt_check_file("ex07/ft_strrev.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex07.c \
	./ex07/ft_strrev.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex07_2.c \
	./ex07/ft_strrev.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int	pt_check_d3_ex08(void)
{
	int i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX08", "ex08"))
		return (0);
	if (!pt_check_file("ex08/ft_atoi.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08.c \
	./ex08/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_2.c \
	./ex08/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_3.c \
	./ex08/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_4.c \
	./ex08/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_5.c \
	./ex08/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_6.c \
	./ex08/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_7.c \
	./ex08/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int	pt_check_d3_ex09(void)
{
	ft_printf("\n");
	if (!pt_check_folder("EX09", "ex09"))
		return (0);
	if (!pt_check_file("ex09/ft_sort_integer_table.c"))
		return (0);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex09.c \
	./ex09/ft_sort_integer_table.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int	pt_check_d3(void)
{
	ft_printf(WHITE "Project: DAY03\n\n" RESET);
	pt_check_d3_ex00();
	pt_check_d3_ex01();
	pt_check_d3_ex02();
	pt_check_d3_ex03();
	pt_check_d3_ex04();
	pt_check_d3_ex05();
	pt_check_d3_ex06();
	pt_check_d3_ex07();
	pt_check_d3_ex08();
	pt_check_d3_ex09();
	return (1);
}
