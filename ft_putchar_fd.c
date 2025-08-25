/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 10:03:25 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/25 16:31:11 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
// ft_putchar_fd('h', 1);
// ft_putchar_fd('e', 1);
// ft_putchar_fd('l', 1);
// ft_putchar_fd('l', 1);
// ft_putchar_fd('o', 1);
// ft_putchar_fd(' ', 1);
// ft_putchar_fd('w', 1);
// ft_putchar_fd('o', 1);
// ft_putchar_fd('r', 1);
// ft_putchar_fd('l', 1);
// ft_putchar_fd('d', 1);
// ft_putchar_fd('!', 1);
// ft_putchar_fd('\n', 1);
// }