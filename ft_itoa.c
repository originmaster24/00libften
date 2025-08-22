/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:31:31 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/22 07:57:41 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursive_itoa(int n, int *idx, char *str)
{
	if (n > 9)
		recursive_itoa(n / 10, idx, str);
	str[*idx] = n % 10 + '0';
	(*idx)++;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		idx;
	long	nb;

	nb = (long) n;
	str = (char *)malloc(sizeof(char) * 15);
	if (!str)
		return (NULL);
	ft_memset(str, 0, 15);
	idx = 0;
	if (nb < 0)
	{
		nb = -nb;
		str[idx] = '-';
		idx++;
	}
	if (nb > 9)
	{
		recursive_itoa(nb / 10, &idx, str);
	}
	str[idx] = nb % 10 + '0';
	return (str);
}

// int main(void)
// {
// 	char *strptr;
// 	int nb = 500;

// 	strptr = ft_itoa(nb);
// 	printf("s:%s, n:%d\n", strptr, nb);
// 	free(strptr);

// 	nb = -500;
// 	strptr = ft_itoa(nb);
// 	printf("s:%s, n:%d\n", strptr, nb);
// 	free(strptr);

// 	nb = 1;
// 	strptr = ft_itoa(nb);
// 	printf("s:%s, n:%d\n", strptr, nb);
// 	free(strptr);

// 	nb = 9;
// 	strptr = ft_itoa(nb);
// 	printf("s:%s, n:%d\n", strptr, nb);
// 	free(strptr);

// 	nb = 0;
// 	strptr = ft_itoa(nb);
// 	printf("s:%s, n:%d\n", strptr, nb);
// 	free(strptr);
// }