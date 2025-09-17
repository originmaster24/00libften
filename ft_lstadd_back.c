/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 21:48:21 by zzhu              #+#    #+#             */
/*   Updated: 2025/09/17 22:40:34 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmpptr;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmpptr = *lst;
	while (tmpptr -> next != NULL)
		tmpptr = tmpptr -> next;
	tmpptr -> next = new;
}

// int main(void)
// {
// 	t_list *list1;
// 	ft_lstadd_back(&list1, ft_lstnew("world"));	
// 	printf("size: %d\n", ft_lstsize(list1));
// }