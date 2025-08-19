/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:44:54 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:56:18 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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