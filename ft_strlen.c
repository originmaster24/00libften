/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:39:25 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/13 14:39:50 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0 ;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char *test = "helloworld";
// 	int i =	ft_strlen(test);
// 	int b = strlen(test);

// 	printf("%d\n", i);
// 	printf("%d\n", b);

// 	test = "asd";

// 	i =	ft_strlen(test);
// 	b = strlen(test);

// 	printf("%d\n", i);
// 	printf("%d\n", b);	
// }