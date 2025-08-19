/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:40:28 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 23:41:01 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		b;
	char	*result;

	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	ft_bzero(result, ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	b = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[b])
	{
		result[i] = s2[b];
		i++;
		b++;
	}
	result[i] = '\0';
	return (result);
}

// int main(void)
// {
// 	char str1[] = "hello";
// 	char str2[] = " world";
// 	char *str3;

// 	str3 = ft_strjoin(str1, str2);
// 	printf("%s, %p\n", str3, str3);
// 	free(str3);
// }