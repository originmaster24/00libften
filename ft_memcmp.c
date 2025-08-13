/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:48:28 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/13 14:29:56 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int	ft_strsize(unsigned char *str1)
{
	int	i;

	i = 0;
	while (str1[i])
		i++;
	return (++i);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;

	i = (int)n;
	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	if (ft_strsize(ptrs1) < i && ft_strsize(ptrs2) < i)
		return (0);
	i = 0;
	while (n--)
	{
		if (ptrs1[i] > ptrs2[i])
			return (1);
		if (ptrs1[i] < ptrs2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int main(void)
{
	const char str1[]=" A     ";
	const char str2[]="  z  ";
	int a = 0;
	int b = 0;
	
	a = ft_memcmp(str1, str2, 2);
	b = memcmp(str1, str2, 2);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}*/