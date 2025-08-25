/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:51:03 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/25 16:51:43 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;
	int		len;

	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!len)
		return (NULL);
	i = -1;
	ft_memset(ptr, '\0', ft_strlen(s) + 1);
	while (++i < ft_strlen(s))
	{
		ptr[i] = f(i, s[i]);
	}
	return (ptr);
}

// int main(void)
// {

// }