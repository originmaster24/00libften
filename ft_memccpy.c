/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:52:49 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:56:57 by zzhu             ###   ########.fr       */
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

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ptrdest;
	char	*ptrsrc;

	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	i = 0;
	if (overlap(ptrdest, n, ptrsrc, n))
		return (NULL);
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		if (ptrsrc[i] == c)
			return (ptrdest + ++i);
		i++;
	}
	return (NULL);
}

//  int	main(void)
// {
// 	char str1[]="zyxwvutsrqponmlkjihgfedcba";
// 	char str2[20];
// 	char str3[20];
// 	char str4[20];
// 	//char *ptr1;
// 	char *ptr2;
// 	char *ptr3;
// 	char *ptr4;

// 	//char ostr2[20];
// 	char ostr3[20];
// 	char ostr4[20];
// 	//char *optr1; see ln76
// 	char *optr2;
// 	char *optr3;
// 	char *optr4;

// 	//ptr1 = ft_memccpy(str1, str1, 'l', 10); //overlap
// 	ptr2 = ft_memccpy(str2, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
// 	ptr3 = ft_memccpy(str3, str1, 'l', 0);
// 	ptr4 = ft_memccpy(str4, str1, 'l', 5);

// 	printf("str1 %s, %p\n\n", str1, str1);

// 	//printf("str1 %s, ptr1 %p\n", str1, ptr1);
// 	printf("str2 %s, ptr2 %p\n", str2, ptr2);
// 	printf("str3 %s, ptr3 %p\n", str3, ptr3);
// 	printf("str4 %s, ptr4 %p\n\n", str4, ptr4);

// 	//optr1 = memccpy(str1, str1, 'l', 10); //overlap not working because
// 											//original restrict
// 	optr2 = memccpy(str2, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
// 	optr3 = memccpy(ostr3, str1, 'l', 0);
// 	optr4 = memccpy(ostr4, str1, 'l', 5);

// 	//printf("optr1 %s, %p\n", optr1, optr1); commented cause ln76
// 	printf("str2 %s, optr2 %p\n", str2, optr2);
// 	printf("ostr3 %s, optr3 %p\n", ostr3, optr3);
// 	printf("ostr4 %s, optr4 %p\n", ostr4, optr4);
// }