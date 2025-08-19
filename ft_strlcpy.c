/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:41:09 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 23:03:41 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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