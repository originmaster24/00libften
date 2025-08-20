/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 19:57:35 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/20 22:23:29 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strcount(int *counter, char const *s, int *i, char c)
{
	*i = 0;
	*counter = 1;
	while (s[*i])
	{
		if (s[*i] != c && s[*i] != '\0')
		{
			(*counter)++;
			while (s[*i] != c && s[*i] != '\0')
			{
				(*i)++;
			}
			continue ;
		}
		(*i)++;
	}
	return (*counter);
}

//start inclusive, end not inclusive
static void	strcopy(char *dest, char const *s, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
}

static char	**alloc_initialize(char ***arr, int *counter, int *i, int *arridx)
{
	*arr = (char **)malloc(sizeof(char *) * *counter);
	if (!*arr)
		return (NULL);
	memset(*arr, 0, sizeof(char *) * (*counter));
	*i = 0;
	*counter = 0;
	*arridx = 0;
	return (*arr);
}

static char	*allinit(char **arr, int *arridx, int *counter, int *i)
{
	arr[*arridx] = (char *)malloc(sizeof(char) * (*i - *counter + 1));
	if (!arr[*arridx])
		return (NULL);
	ft_bzero(arr[*arridx], *i - *counter + 1);
	return (arr[*arridx]);
}

char	**ft_split(char const *s, char c)
{
	int		counter;
	int		i;
	char	**arr;
	int		arridx;

	arr = NULL;
	strcount(&counter, s, &i, c);
	if (!alloc_initialize(&arr, &counter, &i, &arridx))
		return (NULL);
	while (1)
	{
		if (s[i] != c && s[i] != '\0')
		{
			counter = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (!allinit(arr, &arridx, &counter, &i))
				return (NULL);
			strcopy(arr[arridx++], s, counter, i);
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (arr);
}

// int main(void)
// {
// 	char *str;
// 	char c;
// 	char **output;
// 	int i;

// 	c = ' ';

// 	printf("\n\ntest1\n\n");
// 	str = "lorem ipsum dolor sit amet ed non risus. Suspendisse";
// 	output = ft_split(str, c);
// 	for (i = 0; output[i]; i++) 
// 		printf("%s, %p, i = %d \n", output[i], output[i], i);
// 	printf("%s, %p, i = %d \n", output[i], output[i], i);
// 	for (i = 0; output[i]; i++)
// 		free(output[i]);
// 	free(output);

// // 	printf("\n\ntest2\n\n");

// // 	str = " hello world";
// // 	output = ft_split(str, c);
// // 	for (i = 0; output[i]; i++) 
// // 		printf("%s, %p, i = %d \n", output[i], output[i], i);
// // 	printf("%s, %p, i = %d \n", output[i], output[i], i);
// // 	for (i = 0; output[i]; i++)
// // 		free(output[i]);
// // 	free(output);

// // 	printf("\n\ntest3\n\n");

// // 	str = "   lorem   ipsum dolor     sit amet, consectetur";
// // 	output = ft_split(str, c);
// // 	for (i = 0; output[i]; i++) 
// // 		printf("%s, %p, i = %d \n", output[i], output[i], i);
// // 	printf("%s, %p, i = %d \n", output[i], output[i], i);
// // 	for (i = 0; output[i]; i++)
// // 		free(output[i]);
// // 	free(output);

// // 	printf("\n\ntest4\n\n");

// // 	str = "";
// // 	output = ft_split(str, c);
// // 	for (i = 0; output[i]; i++) 
// // 		printf("%s, %p, i = %d \n", output[i], output[i], i);
// // 	printf("%s, %p, i = %d \n", output[i], output[i], i);
// // 	for (i = 0; output[i]; i++)
// // 		free(output[i]);
// // 	free(output);

// // 	printf("\n\ntest5\n\n");

// // 	str = "          ";
// // 	output = ft_split(str, c);
// // 	for (i = 0; output[i]; i++) 
// // 		printf("%s, %p, i = %d \n", output[i], output[i], i);
// // 	printf("%s, %p, i = %d \n", output[i], output[i], i);
// // 	for (i = 0; output[i]; i++)
// // 		free(output[i]);
// // 	free(output);

// 	return (0);

// }