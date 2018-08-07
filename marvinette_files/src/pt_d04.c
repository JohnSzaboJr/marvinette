#include <stdlib.h>
#include <fcntl.h>
#include "../libft/libft.h"
#include "../colors.h"
#include "../marvinette.h"

int	pt_check_d4_ex00(void)
{
	int	i;

	i = 1;
	if (!pt_check_folder("EX00", "ex00"))
		return (0);
	if (!pt_check_file("ex00/ft_iterative_factorial.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex00.c \
	./ex00/ft_iterative_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex00_2.c \
	./ex00/ft_iterative_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex00_3.c \
	./ex00/ft_iterative_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex00_4.c \
	./ex00/ft_iterative_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex00_5.c \
	./ex00/ft_iterative_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d4_ex01(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX01", "ex01"))
		return (0);
	if (!pt_check_file("ex01/ft_recursive_factorial.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex01.c \
	./ex01/ft_recursive_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex01_2.c \
	./ex01/ft_recursive_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex01_3.c \
	./ex01/ft_recursive_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex01_4.c \
	./ex01/ft_recursive_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex01_5.c \
	./ex01/ft_recursive_factorial.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d4_ex02(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX02", "ex02"))
		return (0);
	if (!pt_check_file("ex02/ft_iterative_power.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex02.c \
	./ex02/ft_iterative_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex02_2.c \
	./ex02/ft_iterative_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex02_3.c \
	./ex02/ft_iterative_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex02_4.c \
	./ex02/ft_iterative_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex02_5.c \
	./ex02/ft_iterative_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d4_ex03(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX03", "ex03"))
		return (0);
	if (!pt_check_file("ex03/ft_recursive_power.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex03.c \
	./ex03/ft_recursive_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex03_2.c \
	./ex03/ft_recursive_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex03_3.c \
	./ex03/ft_recursive_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex03_4.c \
	./ex03/ft_recursive_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex03_5.c \
	./ex03/ft_recursive_power.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d4_ex04(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX04", "ex04"))
		return (0);
	if (!pt_check_file("ex04/ft_fibonacci.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex04.c \
	./ex04/ft_fibonacci.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex04_2.c \
	./ex04/ft_fibonacci.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex04_3.c \
	./ex04/ft_fibonacci.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex04_4.c \
	./ex04/ft_fibonacci.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d4_ex05(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX05", "ex05"))
		return (0);
	if (!pt_check_file("ex05/ft_sqrt.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex05.c \
	./ex05/ft_sqrt.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex05_2.c \
	./ex05/ft_sqrt.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex05_2.c \
	./ex05/ft_sqrt.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex05_3.c \
	./ex05/ft_sqrt.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d4_ex06(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX06", "ex06"))
		return (0);
	if (!pt_check_file("ex06/ft_is_prime.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex06.c \
	./ex06/ft_is_prime.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex06_2.c \
	./ex06/ft_is_prime.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex06_3.c \
	./ex06/ft_is_prime.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex06_4.c \
	./ex06/ft_is_prime.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex06_5.c \
	./ex06/ft_is_prime.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d4_ex07(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX07", "ex07"))
		return (0);
	if (!pt_check_file("ex07/ft_find_next_prime.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex07.c \
	./ex07/ft_find_next_prime.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex07_2.c \
	./ex07/ft_find_next_prime.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d04_ex07_3.c \
	./ex07/ft_find_next_prime.c -o ./marvinette_files/test1  2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d4(void)
{
	ft_printf(WHITE "Project: DAY04\n\n" RESET);
	pt_check_d4_ex00();
	pt_check_d4_ex01();
	pt_check_d4_ex02();
	pt_check_d4_ex03();
	pt_check_d4_ex04();
	pt_check_d4_ex05();
	pt_check_d4_ex06();
	pt_check_d4_ex07();
	return (1);
}

// check for recursivity?
