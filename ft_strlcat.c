/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:24:45 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/16 22:01:02 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlength(const char *s)
{
	size_t	i;

	i = 0 ;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	b;
	size_t	dstlen;

	dstlen = strlength(dst);
	i = 0;
	b = 0;
	while (dst[i])
		i++;
	if (dsize <= i)
		return (dsize + strlength(src));
	while (src[b] && i + 1 < dsize)
	{
		dst[i++] = src[b++];
	}
	while (i < dsize)
	{
		dst[i] = '\0';
		i++;
	}
	return (dstlen + strlength(src));
}

// int main(void)
// {
// 	char	*src = "helloworld";
// 	char	dest[20] = "asdaw";
// 	//char	dest1[20] = "";
// 	int		i;

// 	i = ft_strlcat(dest, "lorem ipsum dolor sit amet", 0);
// 	printf("src '%s' dest '%s' i '%d'\n", src, dest, i);

// 	i = strlcat(dest, "lorem ipsum dolor sit amet", 0);
// 	printf("src '%s' dest '%s' i '%d'\n", src, dest, i);
// }