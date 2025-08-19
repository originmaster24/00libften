/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:01:37 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 23:24:00 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = -1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, len + 1);
	while (++i < (int)len && s[start + i])
	{
		str[i] = s[i + start];
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = "hello world";
// 	char *dest;

// 	dest = ft_substr(str, 0, ft_strlen(str));
// 	printf("%s , %p\n", dest, dest);
// 	free(dest);

// 	dest = ft_substr(str, ft_strlen(str), 6);
// 	printf("%s , %p\n", dest, dest);
// 	free(dest);

// 	dest = ft_substr(str, 3, 3);
// 	printf("%s , %p\n", dest, dest);
// 	free(dest);

// 	dest = ft_substr(str, 3, 0);
// 	printf("%s , %p\n", dest, dest);
// 	free(dest);

// 	dest = ft_substr(str, 0, 0);
// 	printf("%s , %p\n", dest, dest);
// 	free(dest);
// }