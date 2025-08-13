/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:24:45 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/13 15:51:07 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0 ;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	char	*ptrsrc;
	size_t	i;
	size_t	b;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	dst = dst;
	ptrsrc = (char *)src;
	i = 0;
	b = 0;
	while (dst[i])
		i++;
	while (src[b] && i + 1 < dsize)
	{
		dst[i++] = src[b++];
	}
	while (i < dsize)
	{
		dst[i] = '\0';
		i++;
	}
	return (dstlen + ft_strlen(ptrsrc));
}

// int main(void)
// {
// 	char	*src = "helloworld";
// 	char	dest[20] = "nice";
// 	char	dest1[20] = "nice";	
// 	int		i;

// 	i = ft_strlcat(dest, src, 20);
// 	printf("src '%s' dest '%s' i '%d'\n", src, dest, i);

// 	i = strlcat(dest1, src, 20);
// 	printf("src '%s' dest '%s' i '%d'\n", src, dest1, i);
// }