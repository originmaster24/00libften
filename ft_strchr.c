/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:53:09 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/13 16:05:01 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}

// int main(void)
// {
// 	const char	str[] = "helloworld!";
// 	char		c = 'a';

// 	printf("%s %p\n", ft_strchr(str, c), ft_strchr(str, c));
// 	printf("%s %p\n", strchr(str, c), strchr(str, c));

// 	c = 'w';
// 	printf("%s %p\n", ft_strchr(str, c), ft_strchr(str, c));
// 	printf("%s %p\n", strchr(str, c), strchr(str, c));

// 	c = '\0';
// 	printf("%s %p\n", ft_strchr(str, c), ft_strchr(str, c));
// 	printf("%s %p\n", strchr(str, c), strchr(str, c));
// }