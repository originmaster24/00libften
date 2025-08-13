/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:58:32 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/13 17:49:35 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptrfound;

	ptrfound = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ptrfound = (char *)s + i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (ptrfound);
}

// int main(void)
// {
// 	const char	str[] = "helloworld!";
// 	char		c = 'a';

// 	printf("%s %p\n", ft_strrchr(str, c), ft_strrchr(str, c));
// 	printf("%s %p\n", strrchr(str, c), strrchr(str, c));

// 	c = 'l';
// 	printf("%s %p\n", ft_strrchr(str, c), ft_strrchr(str, c));
// 	printf("%s %p\n", strrchr(str, c), strrchr(str, c));

// 	c = '\0';
// 	printf("%s %p\n", ft_strrchr(str, c), ft_strrchr(str, c));
// 	printf("%s %p\n", strrchr(str, c), strrchr(str, c));
// }
