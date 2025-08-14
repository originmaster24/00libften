/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:57:41 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/14 20:40:02 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

static int	cases(const char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\r' || c == '\n')
		return (1);
	if (c >= '0' && c <= '9')
		return (2);
	if (c >= '+' || c <= '-')
		return (3);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (cases(nptr[i]) > 0)
	{
		if (cases(nptr[i]) == 3)
		{
			sign = (44 - nptr[i]);
			if (cases(nptr[i + 1]) != 2)
				return (0);
		}
		if (cases(nptr[i]) == 2)
		{
			result = result * 10 + nptr[i] - '0';
			if (cases(nptr[i + 1]) != 2)
				break ;
		}
		i++;
	}
	return (result * sign);
}

// int main(void)
// {
// 	char *str1 = " +123c456";
// 	char *str2 = " -123c456";
// 	char *str3 = " --123 999c456";
// 	char *str4 = "123-999c456";
// 	char *str5 = " ++123-999c456";

// 	printf("str: %s num: %d\n", str1, ft_atoi(str1));
// 	printf("str: %s num: %d\n", str1, atoi(str1));
// 	printf("str: %s num: %d\n", str2, ft_atoi(str2));
// 	printf("str: %s num: %d\n", str2, atoi(str2));
// 	printf("str: %s num: %d\n", str3, ft_atoi(str3));
// 	printf("str: %s num: %d\n", str3, atoi(str3));
// 	printf("str: %s num: %d\n", str4, ft_atoi(str4));
// 	printf("str: %s num: %d\n", str4, atoi(str4));
// 	printf("str: %s num: %d\n", str5, ft_atoi(str5));
// 	printf("str: %s num: %d\n", str5, atoi(str5));
// }