/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:45:01 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/14 22:45:44 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = -1;
	if (nmemb * size > INT_MAX)
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	while (++i < nmemb * size)
		ptr[i] = '\0';
	return (ptr);
}

// int main(void)
// {
// 	char *ptr = ft_calloc(1, 0);
// 	printf("%p\n", ptr);
// 	free(ptr);

// 	ptr = calloc(1, 0);
// 	printf("%p\n", ptr);
// 	free(ptr);
// }