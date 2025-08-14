/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:44:54 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/14 21:07:10 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}

// int main(void)
// {
// 	unsigned char c;

// 	c = 'a';
// 	printf("ft %c, %d\n", c, ft_isascii(c));
// 	printf("or %c, %d\n", c, ft_isascii(c));
// 	c = '2';
// 	printf("ft %c, %d\n", c, ft_isascii(c));
// 	printf("or %c, %d\n", c, ft_isascii(c));
// 	c = 'A';
// 	printf("ft %c, %d\n", c, ft_isascii(c));
// 	printf("or %c, %d\n", c, ft_isascii(c));
// 	c = '!';
// 	printf("ft %c, %d\n", c, ft_isascii(c));
// 	printf("or %c, %d\n", c, ft_isascii(c));
// 	c = ' ';
// 	printf("ft %c, %d\n", c, ft_isascii(c));
// 	printf("or %c, %d\n", c, ft_isascii(c));
// 	c = '\t';
// 	printf("ft %c, %d\n", c, ft_isascii(c));
// 	printf("or %c, %d\n", c, ft_isascii(c));
// 	c = 200;
// 	printf("ft %c, %d\n", c, ft_isascii(c));
// 	printf("or %c, %d\n", c, ft_isascii(c));
// }