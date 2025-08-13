/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:05:28 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/13 17:46:08 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*iterbig;
	char	*ptrlittle;
	char	*ptrbig;
	size_t	i;

	i = -1;
	ptrbig = (char *)big;
	if (little == (const char *)"")
		return (ptrbig);
	while (++i < len && *ptrbig)
	{
		ptrlittle = (char *)little;
		iterbig = ptrbig;
		while (*ptrlittle == *iterbig && *ptrlittle != '\0')
		{
			ptrlittle++;
			iterbig++;
		}
		if (*ptrlittle == '\0')
			return (ptrbig);
		ptrbig++;
	}
	if (*ptrlittle == '\0')
		return (ptrbig);
	return (NULL);
}
/* 
int main(void)
{
	char big[] = "helloworld!";
	char *little = "wor";
	int size = 12;
	char *ptrtest1 = ft_strnstr(big, little, size);
	char *ptrtest2 = strnstr(big, little, size);
	printf("%s, %p\n", ptrtest1, ptrtest1);
	printf("%s, %p\n", ptrtest2, ptrtest2);

	little = "a";
	ptrtest1 = ft_strnstr(big, little, size);
	ptrtest2 = strnstr(big, little, size);
	printf("%s, %p\n", ptrtest1, ptrtest1);
	printf("%s, %p\n", ptrtest2, ptrtest2);

	little = "h";
	ptrtest1 = ft_strnstr(big, little, size);
	ptrtest2 = strnstr(big, little, size);
	printf("%s, %p\n", ptrtest1, ptrtest1);
	printf("%s, %p\n", ptrtest2, ptrtest2);

	little = "ll";
	ptrtest1 = ft_strnstr(big, little, size);
	ptrtest2 = strnstr(big, little, size);
	printf("%s, %p\n", ptrtest1, ptrtest1);
	printf("%s, %p\n", ptrtest2, ptrtest2);
} */