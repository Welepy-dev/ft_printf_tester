/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:34:37 by marcsilv          #+#    #+#             */
/*   Updated: 2025/02/25 13:45:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int	main(void)
{
	printf("original: | %+d |\n", 0);
	printf("original: | %+d |\n", -1);
	printf("original: | %+d |\n", 9);
	printf("original: | %+d |\n", 10);
	printf("original: | %+d |\n", 11);
	printf("original: | %+d |\n", 15);
	printf("original: | %+d |\n", 16);
	printf("original: | %+d |\n", 17);
	printf("original: | %+d |\n", 99);
	printf("original: | %+d |\n", 100);
	printf("original: | %+d |\n", 101);
	printf("original: | %+d |\n", -9);
	printf("original: | %+d |\n", -10);
	printf("original: | %+d |\n", -11);
	printf("original: | %+d |\n", -14);
	printf("original: | %+d |\n", -15);
	printf("original: | %+d |\n", -16);
	printf("original: | %+d |\n", -99);
	printf("original: | %+d |\n", -100);
	printf("original: | %+d |\n", -101);
	printf("original: | %+d |\n", INT_MAX);
	printf("original: | %+d |\n", INT_MIN);
	printf("original: | %+d |\n", LONG_MAX);
	printf("original: | %+d |\n", LONG_MIN);
	printf("original: | %+d |\n", UINT_MAX);
	printf("original: | %+d |\n", ULONG_MAX);
	printf("original: | %+d |\n", 9223372036854775807LL);
	printf("original: | %+d %+d %+d %+d %+d %+d %+d |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("original: | %+i |\n", 0);
	printf("original: | %+i |\n", -1);
	printf("original: | %+i |\n", 1);
	printf("original: | %+i |\n", 9);
	printf("original: | %+i |\n", 10);
	printf("original: | %+i |\n", 11);
	printf("original: | %+i |\n", 15);
	printf("original: | %+i |\n", 16);
	printf("original: | %+i |\n", 17);
	printf("original: | %+i |\n", 99);
	printf("original: | %+i |\n", 100);
	printf("original: | %+i |\n", 101);
	printf("original: | %+i |\n", -9);
	printf("original: | %+i |\n", -10);
	printf("original: | %+i |\n", -11);
	printf("original: | %+i |\n", -14);
	printf("original: | %+i |\n", -15);
	printf("original: | %+i |\n", -16);
	printf("original: | %+i |\n", -99);
	printf("original: | %+i |\n", -100);
	printf("original: | %+i |\n", -101);
	printf("original: | %+i |\n", INT_MAX);
	printf("original: | %+i |\n", INT_MIN);
	printf("original: | %+i |\n", LONG_MAX);
	printf("original: | %+i |\n", LONG_MIN);
	printf("original: | %+i |\n", UINT_MAX);
	printf("original: | %+i |\n", ULONG_MAX);
	printf("original: | %+i |\n", 9223372036854775807LL);
	printf("original: | %+i %+i %+i %+i %+i %+i %+i |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	ft_printf("custom: | %+d |\n", 0);
	ft_printf("custom: | %+d |\n", -1);
	ft_printf("custom: | %+d |\n", 9);
	ft_printf("custom: | %+d |\n", 10);
	ft_printf("custom: | %+d |\n", 11);
	ft_printf("custom: | %+d |\n", 15);
	ft_printf("custom: | %+d |\n", 16);
	ft_printf("custom: | %+d |\n", 17);
	ft_printf("custom: | %+d |\n", 99);
	ft_printf("custom: | %+d |\n", 100);
	ft_printf("custom: | %+d |\n", 101);
	ft_printf("custom: | %+d |\n", -9);
	ft_printf("custom: | %+d |\n", -10);
	ft_printf("custom: | %+d |\n", -11);
	ft_printf("custom: | %+d |\n", -14);
	ft_printf("custom: | %+d |\n", -15);
	ft_printf("custom: | %+d |\n", -16);
	ft_printf("custom: | %+d |\n", -99);
	ft_printf("custom: | %+d |\n", -100);
	ft_printf("custom: | %+d |\n", -101);
	ft_printf("custom: | %+d |\n", INT_MAX);
	ft_printf("custom: | %+d |\n", INT_MIN);
	ft_printf("custom: | %+d |\n", LONG_MAX);
	ft_printf("custom: | %+d |\n", LONG_MIN);
	ft_printf("custom: | %+d |\n", UINT_MAX);
	ft_printf("custom: | %+d |\n", ULONG_MAX);
	ft_printf("custom: | %+d |\n", 9223372036854775807LL);
	ft_printf("custom: | %+d %+d %+d %+d %+d %+d %+d |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("custom: | %+i |\n", 0);
	ft_printf("custom: | %+i |\n", -1);
	ft_printf("custom: | %+i |\n", 1);
	ft_printf("custom: | %+i |\n", 9);
	ft_printf("custom: | %+i |\n", 10);
	ft_printf("custom: | %+i |\n", 11);
	ft_printf("custom: | %+i |\n", 15);
	ft_printf("custom: | %+i |\n", 16);
	ft_printf("custom: | %+i |\n", 17);
	ft_printf("custom: | %+i |\n", 99);
	ft_printf("custom: | %+i |\n", 100);
	ft_printf("custom: | %+i |\n", 101);
	ft_printf("custom: | %+i |\n", -9);
	ft_printf("custom: | %+i |\n", -10);
	ft_printf("custom: | %+i |\n", -11);
	ft_printf("custom: | %+i |\n", -14);
	ft_printf("custom: | %+i |\n", -15);
	ft_printf("custom: | %+i |\n", -16);
	ft_printf("custom: | %+i |\n", -99);
	ft_printf("custom: | %+i |\n", -100);
	ft_printf("custom: | %+i |\n", -101);
	ft_printf("custom: | %+i |\n", INT_MAX);
	ft_printf("custom: | %+i |\n", INT_MIN);
	ft_printf("custom: | %+i |\n", LONG_MAX);
	ft_printf("custom: | %+i |\n", LONG_MIN);
	ft_printf("custom: | %+i |\n", UINT_MAX);
	ft_printf("custom: | %+i |\n", ULONG_MAX);
	ft_printf("custom: | %+i |\n", 9223372036854775807LL);
	ft_printf("custom: | %+i %+i %+i %+i %+i %+i %+i |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	return (0);
}
