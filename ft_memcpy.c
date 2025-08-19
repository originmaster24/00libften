/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:25:10 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:57:15 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overlap(void *a, size_t a_size, void *b, size_t b_size)
{
	char	*a_start;
	char	*a_end;
	char	*b_start;
	char	*b_end;

	a_start = (char *)a;
	a_end = a_start + a_size;
	b_start = (char *)b;
	b_end = b_start + b_size;
	return ((a_start < b_end) && (b_start < a_end));
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*psrc;
	char	*pdst;

	psrc = (char *)src;
	pdst = (char *)dest;
	if (overlap(pdst, n, psrc, n))
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (pdst);
}

/* int	main(void)
{
	char str1[]= "vaerynice!";
	char str2[]= "vaerynice!";
	int a = 0;
	int b = 0;
	char str3[15] = "\0";
	char str4[15] = "\0";

	ft_memcpy(str3, str1, 5);
	memcpy(str4, str2, 5);

	//try the 2 comments below for overlapping
	//ft_memcpy(str1, str1, 5);
	//memcpy(str2, str2, 5);
	

	printf("a %d,b %d\n",a , b);
	printf("str1 %s\n",str1);
	printf("str2 %s\n",str2);
	printf("str3 %s\n",str3);
	printf("str4 %s\n",str4);
	printf("str1 %s\n",str1);
	printf("str2 %s\n",str2);
} */