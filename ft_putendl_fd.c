/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:22:58 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/29 22:31:41 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while ((size_t)++i < ft_strlen(s))
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}

// int main(void)
// {
// 	ft_putendl_fd("hello world!", 1);
// }