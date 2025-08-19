/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:44:01 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:57:02 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrsrc;
	unsigned char	match;
	size_t			i;

	ptrsrc = (unsigned char *)s;
	match = (unsigned char) c;
	i = -1;
	while (++i < n)
	{
		if (ptrsrc[i] == match)
			return (ptrsrc + i);
	}
	return (NULL);
}

/*int main()
{
	char str[] = "helloworld!";
	char letter = 'w';
	int i = 1;
	char *ptr1 = ft_memchr(str, letter, i);
	char *ptr2 = memchr(str, letter, i);

	printf("ptr1 %s\n", ptr1);
	printf("ptr2 %s\n", ptr2);

	i = 8;
	char *ptr1 = ft_memchr(str, letter, i);
	char *ptr2 = memchr(str, letter, i);

	printf("ptr1 %s\n", ptr1);
	printf("ptr2 %s\n", ptr2);
}*/