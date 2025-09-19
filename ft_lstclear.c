/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:55:16 by zzhu              #+#    #+#             */
/*   Updated: 2025/09/19 20:08:24 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmpptr;

	tmpptr = NULL;
	while (*lst != NULL)
	{
		tmpptr = (*lst)-> next;
		del(*lst);
		*lst = tmpptr;
	}
	return ;
}

// int main(void)
// {
//comment the code above just follow the interpretation, the difficult
//part is understanding the pointer to a pointer;
//remember what is what.
// }