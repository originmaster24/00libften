/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:12:46 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/12 15:43:46 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*buf;

	i = 0;
	while (s[i])
		i++;
	printf("dup size %d\n", i);
	buf = (char *)malloc(sizeof(char) * i);
	if (!(buf))
		return (NULL);
	i = -1;
	while (s[++i])
		buf[i] = s[i];
	printf("dup size %d\n", i);
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