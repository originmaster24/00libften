/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 21:00:49 by zzhu              #+#    #+#             */
/*   Updated: 2025/09/19 22:16:18 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*resptr;
	t_list	*resptr_start;
	t_list	*tmpnode;

	// resptr = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst));
	// if (resptr == NULL)
	// 	return ;
	//make a copy of the original list
	resptr = NULL;
	while (lst != NULL)
	{
		tmpnode = ft_lstnew(lst -> content);
		if (tmpnode == NULL)
		{
			ft_lstclear(&resptr, del);
			return NULL;
		}
		if (resptr == NULL)
			resptr = tmpnode;
		ft_lstadd_back(&resptr, tmpnode);
		lst = lst -> next;
	}
	resptr_start = resptr;
	while (resptr != NULL)
	{
		f(resptr);
		resptr = resptr -> next;
	}
	return (resptr_start);
}

void f (void *arg)
{
	printf("%s\n", (char *)arg); 
}

int main(void)
{
	int listn = 5;
	t_list *liststart;
	t_list *tmpnode;
	char value[] = "0";

	liststart = NULL;
	for(int i = 1; i <= listn; i++)
	{
		value[0] = i + '0';
		tmpnode = ft_lstnew(ft_strdup(value));
		if (tmpnode == NULL)
			printf("error test new node fail allocation\n");
		ft_lstadd_back(&liststart, tmpnode);
	}
	ft_lstiter(liststart, f);
	
	
}