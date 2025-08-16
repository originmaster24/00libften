/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:41:09 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/16 22:46:24 by zzhu             ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	char	*ptrdst;
	char	*ptrsrc;
	size_t	i;

	ptrdst = dst;
	ptrsrc = (char *)src;
	i = 0;
	while (src[i] && i + 1 < dsize)
	{
		ptrdst[i] = src[i];
		i++;
	}
	if (dsize != 0)
		ptrdst[i] = '\0';
	return (ft_strlen(ptrsrc));
}

// size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
// {
// 	char	*ptrdst;
// 	char	*ptrsrc;
// 	size_t	i;

// 	ptrdst = dst;
// 	ptrsrc = (char *)src;
// 	i = 0;
// 	while (src[i] && i + 1 < dsize)
// 	{
// 		ptrdst[i] = src[i];
// 		i++;
// 	}
// 	ptrdst[i] = '\0';
// 	return (ft_strlen(ptrsrc));
// }

// int main(void)
// {
// 	char	*src = "helloworld";
// 	char	dest[20];
// 	int		i;

// 	i = ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0);
// 	printf("src '%s' dest '%s' i '%d'\n", src, dest, i);
// 	i = strlcpy(dest, "lorem ipsum dolor sit amet", 0);
// 	printf("src '%s' dest '%s' i '%d'\n", src, dest, i);
// }