/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 21:02:27 by zzhu              #+#    #+#             */
/*   Updated: 2025/09/06 21:05:54 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_ptr;

	new_ptr = (t_list *)malloc(sizeof(t_list));
	if (!new_ptr)
		return (NULL);
	new_ptr->content = content;
	new_ptr->next = NULL;
	return (new_ptr);
}

// int main(void)
// {
// 	char str[] = "helloworld!";
// 	char letter = 'w';
// 	int i = 1;
// 	void *ptr1 = ft_memchr(str, letter, i);
// 	void *ptr2 = memchr(str, letter, i);

// 	printf("ptr1 %s\n", (char *)ptr1);
// 	printf("ptr2 %s\n", (char *)ptr2);

// 	i = 8;
// 	ptr1 = ft_memchr(str, letter, i);
// 	ptr2 = memchr(str, letter, i);

// 	printf("ptr1 %s\n", (char *)ptr1);
// 	printf("ptr2 %s\n", (char *)ptr2);
// }