/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:52:09 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:58:13 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ss1[i] == ss2[i] && ss1[i] && i + 1 < n)
	{
		i++;
	}
	return (ss1[i] - ss2[i]);
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

// 	str1 = "\201";
// 	str2 = "A";

// 	printf("str1: %s str2: %s %d\n", str1, str2, ft_strncmp(str1, str2, i));
// 	printf("str1: %s str2: %s %d\n", str1, str2, strncmp(str1, str2, i));
// }