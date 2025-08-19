/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:05:28 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:58:17 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;
	size_t	i;

	b = -1;
	if (little == (const char *)"")
		return ((char *)big);
	while (++b + 1 < len && big[b])
	{
		l = 0;
		i = b;
		while (little[l] == big[i] && little[l] != '\0' && i < len)
		{
			l++;
			i++;
		}
		if (little[l] == '\0')
			return ((char *)big + b);
		b++;
	}
	return (NULL);
}

// int main(void)
// {

// 	char *ptrtest1 = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
// 	char *ptrtest2 = strnstr("lorem ipsum dolor sit amet", "lorem", 15);
// 	printf("%s, %p\n", ptrtest1, ptrtest1);
// 	printf("%s, %p\n", ptrtest2, ptrtest2);

// 	// little = "a";	
// 	// ptrtest1 = ft_strnstr(big, little, size);
// 	// ptrtest2 = strnstr(big, little, size);
// 	// printf("%s, %p\n", ptrtest1, ptrtest1);
// 	// printf("%s, %p\n", ptrtest2, ptrtest2);

// 	// little = "h";
// 	// ptrtest1 = ft_strnstr(big, little, size);
// 	// ptrtest2 = strnstr(big, little, size);
// 	// printf("%s, %p\n", ptrtest1, ptrtest1);
// 	// printf("%s, %p\n", ptrtest2, ptrtest2);

// 	// little = "ll";
// 	// ptrtest1 = ft_strnstr(big, little, size);
// 	// ptrtest2 = strnstr(big, little, size);
// 	// printf("%s, %p\n", ptrtest1, ptrtest1);
// 	// printf("%s, %p\n", ptrtest2, ptrtest2);
// }