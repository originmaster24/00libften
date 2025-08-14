/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:27:36 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/14 21:27:56 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int main(void)
// {
// 	char *str;

// 	str = "Hello world";

// 	for (int i = 0; str[i]; i++)
// 		printf("%c", ft_toupper(str[i]));
// 	printf("\n");

// 	str = "1world";

// 	for (int i = 0; str[i]; i++)
// 		printf("%c", ft_toupper(str[i]));
// 	printf("\n");

// }