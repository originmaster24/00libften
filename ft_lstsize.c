/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:25:22 by zzhu              #+#    #+#             */
/*   Updated: 2025/09/10 16:32:33 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptrlst;
	int		counter;

	ptrlst = lst;
	if (lst == NULL)
		return (0);
	counter = 1;
	while (ptrlst -> next != NULL)
	{
		counter++;
		ptrlst = ptrlst -> next;
	}
	return (counter);
}

// int main(void)
// {
// }