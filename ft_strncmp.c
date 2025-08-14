/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:52:09 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/14 20:39:15 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char *str1 = "ABC";
// 	char *str2 = "ABC";
// 	int i = 3;

// 	printf("str1: %s str2: %s %d\n", str1, str2, ft_strncmp(str1, str2, i));
// 	printf("str1: %s str2: %s %d\n", str1, str2, strncmp(str1, str2, i));

// 	str1 = "ABC";
// 	str2 = "AB";

// 	printf("str1: %s str2: %s %d\n", str1, str2, ft_strncmp(str1, str2, i));
// 	printf("str1: %s str2: %s %d\n", str1, str2, strncmp(str1, str2, i));

// 	str1 = "ABC";
// 	str2 = "ABZ";

// 	printf("str1: %s str2: %s %d\n", str1, str2, ft_strncmp(str1, str2, i));
// 	printf("str1: %s str2: %s %d\n", str1, str2, strncmp(str1, str2, i));

// 	str1 = "ABJ";
// 	str2 = "ABC";

// 	printf("str1: %s str2: %s %d\n", str1, str2, ft_strncmp(str1, str2, i));
// 	printf("str1: %s str2: %s %d\n", str1, str2, strncmp(str1, str2, i));

// }