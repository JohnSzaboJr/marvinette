#include <stdlib.h>
#include <fcntl.h>
#include "../libft/libft.h"
#include "../colors.h"
#include "../marvinette.h"

int	pt_check_d5_ex00(void)
{
	if (!pt_check_folder("EX00", "ex00"))
		return (0);
	if (!pt_check_file("ex00/ft_putstr.c"))
		return (0);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex05.c ./marvinette_files/libft/ft_putchar.c\
	./ex00/ft_putstr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test_print1("./marvinette_files/testd03ex05 > \
	./marvinette_files/good_output");
	return (1);
}

int	pt_check_d5_ex01(void)
{
	int i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX01", "ex05"))
		return (0);
	if (!pt_check_file("ex01/ft_putnbr.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex01.c ./marvinette_files/libft/ft_putchar.c\
	./ex01/ft_putnbr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test_print1("./marvinette_files/testd05ex01 > \
	./marvinette_files/good_output");
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex01_2.c ./marvinette_files/libft/ft_putchar.c\
	./ex01/ft_putnbr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test_print1("./marvinette_files/testd05ex01_2 > \
	./marvinette_files/good_output");
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex01_3.c ./marvinette_files/libft/ft_putchar.c\
	./ex01/ft_putnbr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test_print1("./marvinette_files/testd05ex01_3 > \
	./marvinette_files/good_output");
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex01_4.c ./marvinette_files/libft/ft_putchar.c\
	./ex01/ft_putnbr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test_print1("./marvinette_files/testd05ex01_4 > \
	./marvinette_files/good_output");
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex01_5.c ./marvinette_files/libft/ft_putchar.c\
	./ex01/ft_putnbr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test_print1("./marvinette_files/testd05ex01_5 > \
	./marvinette_files/good_output");
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex01_6.c ./marvinette_files/libft/ft_putchar.c\
	./ex01/ft_putnbr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test_print1("./marvinette_files/testd05ex01_6 > \
	./marvinette_files/good_output");
	i++;
	return (1);
}

int	pt_check_d5_ex02(void)
{
	int i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX02", "ex02"))
		return (0);
	if (!pt_check_file("ex02/ft_atoi.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08.c \
	./ex02/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_2.c \
	./ex02/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_3.c \
	./ex02/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_4.c \
	./ex02/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_5.c \
	./ex02/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_6.c \
	./ex02/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d03_ex08_7.c \
	./ex02/ft_atoi.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int	pt_check_d5_ex03(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX03", "ex03"))
		return (0);
	if (!pt_check_file("ex03/ft_strcpy.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex03.c \
	./ex03/ft_strcpy.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex03_2.c \
	./ex03/ft_strcpy.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex04(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX04", "ex04"))
		return (0);
	if (!pt_check_file("ex04/ft_strncpy.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex04.c \
	./ex04/ft_strncpy.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex04_2.c \
	./ex04/ft_strncpy.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex05(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX05", "ex05"))
		return (0);
	if (!pt_check_file("ex05/ft_strstr.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex05.c \
	./ex05/ft_strstr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex05_2.c \
	./ex05/ft_strstr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex05_3.c \
	./ex05/ft_strstr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex05_4.c \
	./ex05/ft_strstr.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex06(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX06", "ex06"))
		return (0);
	if (!pt_check_file("ex06/ft_strcmp.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex06.c \
	./ex06/ft_strcmp.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex06_2.c \
	./ex06/ft_strcmp.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex06_3.c \
	./ex06/ft_strcmp.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex06_4.c \
	./ex06/ft_strcmp.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex07(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX07", "ex07"))
		return (0);
	if (!pt_check_file("ex07/ft_strncmp.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex07.c \
	./ex07/ft_strncmp.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex07_2.c \
	./ex07/ft_strncmp.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex08(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX08", "ex08"))
		return (0);
	if (!pt_check_file("ex08/ft_strupcase.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex08.c \
	./ex08/ft_strupcase.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex09(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX09", "ex09"))
		return (0);
	if (!pt_check_file("ex09/ft_strlowcase.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex09.c \
	./ex09/ft_strlowcase.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex10(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX10", "ex10"))
		return (0);
	if (!pt_check_file("ex10/ft_strcapitalize.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex10.c \
	./ex10/ft_strcapitalize.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex11(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX11", "ex11"))
		return (0);
	if (!pt_check_file("ex11/ft_str_is_alpha.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex11.c \
	./ex11/ft_str_is_alpha.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex11_2.c \
	./ex11/ft_str_is_alpha.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex11_3.c \
	./ex11/ft_str_is_alpha.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex12(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX12", "ex12"))
		return (0);
	if (!pt_check_file("ex12/ft_str_is_numeric.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex12.c \
	./ex12/ft_str_is_numeric.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex12_2.c \
	./ex12/ft_str_is_numeric.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex12_3.c \
	./ex12/ft_str_is_numeric.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}


int	pt_check_d5_ex13(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX13", "ex13"))
		return (0);
	if (!pt_check_file("ex13/ft_str_is_lowercase.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex13.c \
	./ex13/ft_str_is_lowercase.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex13_2.c \
	./ex13/ft_str_is_lowercase.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex13_3.c \
	./ex13/ft_str_is_lowercase.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex14(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX14", "ex14"))
		return (0);
	if (!pt_check_file("ex14/ft_str_is_uppercase.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex14.c \
	./ex14/ft_str_is_uppercase.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex14_2.c \
	./ex14/ft_str_is_uppercase.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex14_3.c \
	./ex14/ft_str_is_uppercase.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex15(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX15", "ex15"))
		return (0);
	if (!pt_check_file("ex15/ft_str_is_printable.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex15.c \
	./ex15/ft_str_is_printable.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex15_2.c \
	./ex15/ft_str_is_printable.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex16(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX16", "ex16"))
		return (0);
	if (!pt_check_file("ex16/ft_strcat.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex16.c \
	./ex16/ft_strcat.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	return (1);
}

int	pt_check_d5_ex17(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX17", "ex17"))
		return (0);
	if (!pt_check_file("ex17/ft_strncat.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex17.c \
	./ex17/ft_strncat.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex17_2.c \
	./ex17/ft_strncat.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
		ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex17_3.c \
	./ex17/ft_strncat.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex18(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX18", "ex18"))
		return (0);
	if (!pt_check_file("ex18/ft_strlcat.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex18.c \
	./ex18/ft_strlcat.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex18_2.c \
	./ex18/ft_strlcat.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex18_3.c \
	./ex18/ft_strlcat.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex18_4.c \
	./ex18/ft_strlcat.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5_ex19(void)
{
	int	i;

	i = 1;
	ft_printf("\n");
	if (!pt_check_folder("EX19", "ex19"))
		return (0);
	if (!pt_check_file("ex19/ft_strlcpy.c"))
		return (0);
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex19.c \
	./ex19/ft_strlcpy.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	ft_printf("(%d) ", i);
	if (!pt_check_compil("gcc -Wall -Werror -Wextra \
	./marvinette_files/main_d05_ex19_2.c \
	./ex19/ft_strlcpy.c -o ./marvinette_files/test1 2>/dev/null"))
		return (0);
	pt_test1();
	i++;
	return (1);
}

int	pt_check_d5(void)
{
	ft_printf(WHITE "Project: DAY05\n\n" RESET);
	pt_check_d5_ex00();
	pt_check_d5_ex01();
	pt_check_d5_ex02();
	pt_check_d5_ex03();
	pt_check_d5_ex04();
	pt_check_d5_ex05();
	pt_check_d5_ex06();
	pt_check_d5_ex07();
	pt_check_d5_ex08();
	pt_check_d5_ex09();
	pt_check_d5_ex10();
	pt_check_d5_ex11();
	pt_check_d5_ex12();
	pt_check_d5_ex13();
	pt_check_d5_ex14();
	pt_check_d5_ex15();
	pt_check_d5_ex16();
	pt_check_d5_ex17();
	pt_check_d5_ex18();
	pt_check_d5_ex19();
	return (1);
}
