/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:50:47 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/12 19:51:18 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t	i;
	char	*p;

	p = ptr;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (ptr);
}

/* int	main(void)
{
	char str1[10];
	char str2[10];

	ft_memset(str1, '\0', 7);
	memset(str2, '\0', 7);
	printf("custom: '%s'\n",str1);
	printf("original: '%s'\n",str2);
	
	ft_memset(str1, 20000, 6);
	memset(str2, 20000, 6);
	printf("custom: '%s'\n",str1);
	printf("original: '%s'\n",str2);

	ft_memset(str1, 'c', 1);
	memset(str2, 'c', 1);
	printf("custom: '%s'\n",str1);
	printf("original: '%s'\n",str2);

	ft_memset(str1, 'a', 2 );
	memset(str2, 'a', 2 );
	printf("custom: '%s'\n",str1);
	printf("original: '%s'\n",str2);

	ft_memset(str1, 'b', 6 );
	memset(str2, 'b', 6 );
	printf("custom: '%s'\n",str1);
	printf("original: '%s'\n",str2);

	return (0);
	
} */