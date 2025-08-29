/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:33:26 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/29 22:50:29 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = (long) n;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (nb < 1)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

// int main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-1, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-35, 1);
// 	printf("\n");
// 	ft_putnbr_fd(1, 1);
// 	printf("\n");
// 	ft_putnbr_fd(35, 1);
// 	printf("\n");
// 	ft_putnbr_fd(INT_MAX, 1);
// 	printf("\n");
// 	ft_putnbr_fd(INT_MIN, 1);
// 	printf("\n");
// }