/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:04:36 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/16 16:03:40 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static void	zerostr(char *str, size_t size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		str[i] = '\0';
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*psrc;
	char	*pdst;
	char	*buff;

	psrc = (char *)src;
	pdst = (char *)dest;
	i = 0;
	while (psrc[i])
		i++;
	buff = (char *)malloc(sizeof(char) * ++i);
	zerostr(buff, i);
	i = -1;
	while (++i < n)
		buff[i] = psrc[i];
	i = -1;
	while (++i < n)
		pdst[i] = buff[i];
	free(buff);
	return (pdst);
}

// int	main(void)
// {
// 	char str1[]= "vaerynice!";
// 	char str2[]= "vaerynice!";
// 	char str3[15] = "\0";
// 	char str4[15] = "\0";

// 	ft_memmove(str3, "con\0sec\0\0te\0tur", 10);
// 	memmove(str3, "con\0sec\0\0te\0tur", 10);

// 	ft_memmove(str1, str1, 0);
// 	memmove(str2, str2, 0);

// 	printf("str1 %s\n",str1);
// 	printf("str2 %s\n\n",str2);

// 	printf("str3 %s, %p\n", str3, str3);
// 	printf("str3 %s, %p\n\n", str3, str3);

// 	printf("str1 %s\n",str1);
// 	printf("str2 %s\n\n",str2);

// //----------------------------	
// 	printf("----------\n\n");

// 	ft_memmove(str3, str1, 5);
// 	memmove(str4, str2, 5);

// 	ft_memmove(str1, str1, 5);
// 	memmove(str2, str2, 5);

// 	printf("str1 %s\n",str1);
// 	printf("str2 %s\n\n",str2);

// 	printf("str3 %s\n",str3);
// 	printf("str4 %s\n\n",str4);

// 	printf("str1 %s\n",str1);
// 	printf("str2 %s\n\n",str2);

// //-----------------------------------

// }