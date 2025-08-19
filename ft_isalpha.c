/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:44:54 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:59:05 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int main(void)
// {
// 	char c;

// 	c = 'a';
// 	printf("ft %c, %d\n", c, ft_isalpha(c));
// 	printf("or %c, %d\n", c, ft_isalpha(c));
// 	c = '2';
// 	printf("ft %c, %d\n", c, ft_isalpha(c));
// 	printf("or %c, %d\n", c, ft_isalpha(c));
// 	c = 'A';
// 	printf("ft %c, %d\n", c, ft_isalpha(c));
// 	printf("or %c, %d\n", c, ft_isalpha(c));
// 	c = '!';
// 	printf("ft %c, %d\n", c, ft_isalpha(c));
// 	printf("or %c, %d\n", c, ft_isalpha(c));
// 	c = ' ';
// 	printf("ft %c, %d\n", c, ft_isalpha(c));
// 	printf("or %c, %d\n", c, ft_isalpha(c));
// 	c = '\t';
// 	printf("ft %c, %d\n", c, ft_isalpha(c));
// 	printf("or %c, %d\n", c, ft_isalpha(c));
// }