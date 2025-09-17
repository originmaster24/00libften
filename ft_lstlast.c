/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:49:00 by zzhu              #+#    #+#             */
/*   Updated: 2025/09/17 20:49:01 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmpptr;

	tmpptr = lst;
	while (1)
	{
		if (tmpptr -> next == NULL)
			return (tmpptr);
		tmpptr = tmpptr -> next;
	}
}

// int main(void)
// {
// 	t_list *list1;
// 	t_list *test;

// 	list1 = NULL;

// 	ft_lstadd_front(&list1,	ft_lstnew("hello"));
// 	ft_lstadd_front(&list1,	ft_lstnew("world"));
// 	test = ft_lstlast(list1);
// 	printf("%s\n",(char *)test -> content);

// }
