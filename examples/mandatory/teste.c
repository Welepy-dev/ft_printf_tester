/*• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.*/

#include <stdio.h>
#include <limits.h>
#include "../../../ft_printf.h"


static void	prints(int fd)
{
	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	
	ft_printf("%c\n", '0');
	ft_printf(" %c \n", '0');
	ft_printf(" %c\n", '0' - 256);
	ft_printf("%c \n", '0' + 256);
	ft_printf(" %c %c %c \n", '0', 0, '1');
	ft_printf(" %c %c %c \n", ' ', ' ', ' ');
	ft_printf(" %c %c %c \n", '1', '2', '3');
	ft_printf(" %c %c %c \n", '2', '1', 0);
	ft_printf(" %c %c %c \n", 0, '1', '2');

	ft_printf("%s\n", "");
	ft_printf(" %s\n", "");
	ft_printf("%s \n", "");
	ft_printf(" %s \n", "");
	ft_printf(" %s \n", "-");
	ft_printf(" %s %s \n", "\n", "-");
	ft_printf(" %s %s \n", " - \n", "");
	ft_printf(" %s %s %s %s %s\n", " - \n", "\n", "4\n", "\n", s2);
	ft_printf(" %s %s %s %s %s \n", " - \n", "\n", "4\n", "\n", "2 ");
	ft_printf(" NULL %s NULL \n", NULL);

	ft_printf(" %p \n", -1);
	ft_printf(" %p \n", 1);
	ft_printf(" %p \n", 15);
	ft_printf(" %p \n", 16);
	ft_printf(" %p \n", 17);
	ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	ft_printf(" %p %p \n", INT_MIN, INT_MAX);
	ft_printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p %p \n", 0, 0);

	ft_printf(" %i \n", 0);
	ft_printf(" %i \n", -1);
	ft_printf(" %i \n", 1);
	ft_printf(" %i \n", 9);
	ft_printf(" %i \n", 10);
	ft_printf(" %i \n", 11);
	ft_printf(" %i \n", 15);
	ft_printf(" %i \n", 16);
	ft_printf(" %i \n", 17);
	ft_printf(" %i \n", 99);
	ft_printf(" %i \n", 100);
	ft_printf(" %i \n", 101);
	ft_printf(" %i \n", -9);
	ft_printf(" %i \n", -10);
	ft_printf(" %i \n", -11);
	ft_printf(" %i \n", -14);
	ft_printf(" %i \n", -15);
	ft_printf(" %i \n", -16);
	ft_printf(" %i \n", -99);
	ft_printf(" %i \n", -100);
	ft_printf(" %i \n", -101);
	ft_printf(" %i \n", INT_MAX);
	ft_printf(" %i \n", INT_MIN);
	ft_printf(" %i \n", LONG_MAX);
	ft_printf(" %i \n", LONG_MIN);
	ft_printf(" %i \n", UINT_MAX);
	ft_printf(" %i \n", ULONG_MAX);
	ft_printf(" %i \n", 9223372036854775807LL);
	ft_printf(" %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	ft_printf(" %u \n", 0);
	ft_printf(" %u \n", -1);
	ft_printf(" %u \n", 1);
	ft_printf(" %u \n", 9);
	ft_printf(" %u \n", 10);
	ft_printf(" %u \n", 11);
	ft_printf(" %u \n", 15);
	ft_printf(" %u \n", 16);
	ft_printf(" %u \n", 17);
	ft_printf(" %u \n", 99);
	ft_printf(" %u \n", 100);
	ft_printf(" %u \n", 101);
	ft_printf(" %u \n", -9);
	ft_printf(" %u \n", -10);
	ft_printf(" %u \n", -11);
	ft_printf(" %u \n", -14);
	ft_printf(" %u \n", -15);
	ft_printf(" %u \n", -16);
	ft_printf(" %u \n", -99);
	ft_printf(" %u \n", -100);
	ft_printf(" %u \n", -101);
	ft_printf(" %u \n", INT_MAX);
	ft_printf(" %u \n", INT_MIN);
	ft_printf(" %u \n", LONG_MAX);
	ft_printf(" %u \n", LONG_MIN);
	ft_printf(" %u \n", UINT_MAX);
	ft_printf(" %u \n", ULONG_MAX);
	ft_printf(" %u \n", 9223372036854775807LL);
	ft_printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	ft_printf(" %X \n", 0);
	ft_printf(" %X \n", -1);
	ft_printf(" %X \n", 1);
	ft_printf(" %X \n", 9);
	ft_printf(" %X \n", 10);
	ft_printf(" %X \n", 11);
	ft_printf(" %X \n", 15);
	ft_printf(" %X \n", 16);
	ft_printf(" %X \n", 17);
	ft_printf(" %X \n", 99);
	ft_printf(" %X \n", 100);
	ft_printf(" %X \n", 101);
	ft_printf(" %X \n", -9);
	ft_printf(" %X \n", -10);
	ft_printf(" %X \n", -11);
	ft_printf(" %X \n", -14);
	ft_printf(" %X \n", -15);
	ft_printf(" %X \n", -16);
	ft_printf(" %X \n", -99);
	ft_printf(" %X \n", -100);
	ft_printf(" %X \n", -101);
	ft_printf(" %X \n", INT_MAX);
	ft_printf(" %X \n", INT_MIN);
	ft_printf(" %X \n", LONG_MAX);
	ft_printf(" %X \n", LONG_MIN);
	ft_printf(" %X \n", UINT_MAX);
	ft_printf(" %X \n", ULONG_MAX);
	ft_printf(" %X \n", 9223372036854775807LL);
	ft_printf(" %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %X \n", 42);
	ft_printf(" %X \n", -42);

	ft_printf(" %x \n", 0);
	ft_printf(" %x \n", -1);
	ft_printf(" %x \n", 1);
	ft_printf(" %x \n", 9);
	ft_printf(" %x \n", 10);
	ft_printf(" %x \n", 11);
	ft_printf(" %x \n", 15);
	ft_printf(" %x \n", 16);
	ft_printf(" %x \n", 17);
	ft_printf(" %x \n", 99);
	ft_printf(" %x \n", 100);
	ft_printf(" %x \n", 101);
	ft_printf(" %x \n", -9);
	ft_printf(" %x \n", -10);
	ft_printf(" %x \n", -11);
	ft_printf(" %x \n", -14);
	ft_printf(" %x \n", -15);
	ft_printf(" %x \n", -16);
	ft_printf(" %x \n", -99);
	ft_printf(" %x \n", -100);
	ft_printf(" %x \n", -101);
	ft_printf(" %x \n", INT_MAX);
	ft_printf(" %x \n", INT_MIN);
	ft_printf(" %x \n", LONG_MAX);
	ft_printf(" %x \n", LONG_MIN);
	ft_printf(" %x \n", UINT_MAX);
	ft_printf(" %x \n", ULONG_MAX);
	ft_printf(" %x \n", 9223372036854775807LL);
	ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %x \n", 42);
	ft_printf(" %x \n", -42);

	ft_printf(" %% ");
	ft_printf(" %%%% ");
	ft_printf(" %% %% %% ");
	ft_printf(" %%  %%  %% ");
	ft_printf(" %%   %%   %% ");
	ft_printf("%%");
	ft_printf("%% %%");

	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42\n", 42, 42 ,42 , 42, 42, 'B', "-42\n", -42, -42 ,-42 ,-42, 42, 'C', "0\n", 0, 0 ,0 ,0, 42, 0);
}

int	main(void)
{
	prints(1);

	return 0;
}