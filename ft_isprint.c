/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:44:54 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:56:51 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}

// int main(void)
// {
// 	char c;

// 	c = 'a';
// 	printf("ft %c, %d\n", c, ft_isprint(c));
// 	printf("or %c, %d\n", c, ft_isprint(c));
// 	c = '2';
// 	printf("ft %c, %d\n", c, ft_isprint(c));
// 	printf("or %c, %d\n", c, ft_isprint(c));
// 	c = 'A';
// 	printf("ft %c, %d\n", c, ft_isprint(c));
// 	printf("or %c, %d\n", c, ft_isprint(c));
// 	c = '!';
// 	printf("ft %c, %d\n", c, ft_isprint(c));
// 	printf("or %c, %d\n", c, ft_isprint(c));
// 	c = ' ';
// 	printf("ft %c, %d\n", c, ft_isprint(c));
// 	printf("or %c, %d\n", c, ft_isprint(c));
// 	c = '\t';
// 	printf("ft %c, %d\n", c, ft_isprint(c));
// 	printf("or %c, %d\n", c, ft_isprint(c));
// 	c = 4;
// 	printf("ft %c, %d\n", c, ft_isprint(c));
// 	printf("or %c, %d\n", c, ft_isprint(c));
// }