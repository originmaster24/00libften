/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:44:54 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:56:30 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int main(void)
// {
// 	char c;

// 	c = 'a';
// 	printf("ft %c, %d\n", c, ft_isdigit(c));
// 	printf("or %c, %d\n", c, ft_isdigit(c));
// 	c = '2';
// 	printf("ft %c, %d\n", c, ft_isdigit(c));
// 	printf("or %c, %d\n", c, ft_isdigit(c));
// 	c = 'A';
// 	printf("ft %c, %d\n", c, ft_isdigit(c));
// 	printf("or %c, %d\n", c, ft_isdigit(c));
// 	c = '!';
// 	printf("ft %c, %d\n", c, ft_isdigit(c));
// 	printf("or %c, %d\n", c, ft_isdigit(c));
// 	c = ' ';
// 	printf("ft %c, %d\n", c, ft_isdigit(c));
// 	printf("or %c, %d\n", c, ft_isdigit(c));
// 	c = '\t';
// 	printf("ft %c, %d\n", c, ft_isdigit(c));
// 	printf("or %c, %d\n", c, ft_isdigit(c));
// }