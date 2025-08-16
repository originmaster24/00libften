/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:57:41 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/16 20:08:19 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr);

static int	cases(const char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\r'
		|| c == '\n' || c == '\f')
		return (1);
	if (c >= '0' && c <= '9')
		return (2);
	if (c == '+' || c == '-')
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
// 	char *str1 = "\t\n\r\v\fd469 \n";
// 	char *str2 = " d469";
// 	char *str3 = "d469";
// 	char *str4 = "123-999c456";
// 	char *str5 = " ++123-999c456";

// 	printf("str1: %s num: %d\n", str1, ft_atoi(str1));
// 	printf("str1: %s num: %d\n", str1, atoi(str1));
// 	printf("str2: %s num: %d\n", str2, ft_atoi(str2));
// 	printf("str2: %s num: %d\n", str2, atoi(str2));
// 	printf("str3: %s num: %d\n", str3, ft_atoi(str3));
// 	printf("str3: %s num: %d\n", str3, atoi(str3));
// 	printf("str4: %s num: %d\n", str4, ft_atoi(str4));
// 	printf("str4: %s num: %d\n", str4, atoi(str4));
// 	printf("str5: %s num: %d\n", str5, ft_atoi(str5));
// 	printf("str5: %s num: %d\n\n\n", str5, atoi(str5));

	// str1 = "-8075";
	// str2 = "---8075";
	// str3 = " - 8075";
	// str4 = "8075-";
	// str5 = " a-8075";	

	// printf("str: %s num: %d\n", str1, ft_atoi(str1));
	// printf("str: %s num: %d\n", str1, atoi(str1));
	// printf("str: %s num: %d\n", str2, ft_atoi(str2));
	// printf("str: %s num: %d\n", str2, atoi(str2));
	// printf("str: %s num: %d\n", str3, ft_atoi(str3));
	// printf("str: %s num: %d\n", str3, atoi(str3));
	// printf("str: %s num: %d\n", str4, ft_atoi(str4));
	// printf("str: %s num: %d\n", str4, atoi(str4));
	// printf("str: %s num: %d\n", str5, ft_atoi(str5));
	// printf("str: %s num: %d\n\n\n", str5, atoi(str5));
//}
