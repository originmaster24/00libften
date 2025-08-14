/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:44:54 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/14 21:02:59 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int main(void)
// {
// 	char c;

// 	c = 'a';
// 	printf("ft %c, %d\n", c, ft_isalnum(c));
// 	printf("or %c, %d\n", c, ft_isalnum(c));
// 	c = '2';
// 	printf("ft %c, %d\n", c, ft_isalnum(c));
// 	printf("or %c, %d\n", c, ft_isalnum(c));
// 	c = 'A';
// 	printf("ft %c, %d\n", c, ft_isalnum(c));
// 	printf("or %c, %d\n", c, ft_isalnum(c));
// 	c = '!';
// 	printf("ft %c, %d\n", c, ft_isalnum(c));
// 	printf("or %c, %d\n", c, ft_isalnum(c));
// 	c = ' ';
// 	printf("ft %c, %d\n", c, ft_isalnum(c));
// 	printf("or %c, %d\n", c, ft_isalnum(c));
// 	c = '\t';
// 	printf("ft %c, %d\n", c, ft_isalnum(c));
// 	printf("or %c, %d\n", c, ft_isalnum(c));
// }