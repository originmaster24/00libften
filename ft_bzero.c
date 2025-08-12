/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:29:05 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/12 13:24:20 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char str1[]= "verynice!";
	char str2[]= "verynice!";

	ft_bzero(str1, 4);
	bzero(str2, 4);

	printf("%s\n",str1);
	printf("%s\n",str2);
}*/