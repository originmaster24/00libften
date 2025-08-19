/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:12:46 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/19 22:57:31 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*buf;

	i = 0;
	while (s[i])
		i++;
	buf = (char *)malloc(sizeof(char) * i);
	if (!(buf))
		return (NULL);
	i = -1;
	while (s[++i])
		buf[i] = s[i];
	buf[i] = s[i];
	return (buf);
}

/*  int main(void)
{
	const char *cstr = "hello world";
	char  *str = ft_strdup(cstr);
	printf("cstr %s, %p\n", cstr, cstr);
	printf("str %s, %p\n", str, str);
	free(str);
}  */