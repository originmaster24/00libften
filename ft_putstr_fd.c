/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:11:34 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/29 22:24:09 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while ((size_t)++i < ft_strlen(s))
		write(fd, &s[i], 1);
}

// int main(void)
// {
// 	ft_putstr_fd("hello world", 1);
// 	printf("\n");
// }