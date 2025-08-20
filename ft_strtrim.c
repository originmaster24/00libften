/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhu <zzhu@student.42firenze.it>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:07:53 by zzhu              #+#    #+#             */
/*   Updated: 2025/08/20 18:45:32 by zzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trimlen(char const *s1, char const *set, int *start, int *end)
{
	int	i;

	while (1)
	{
		i = 0;
		while (set[i] != s1[*start] && set[i])
			i++;
		if (set[i] == s1[*start] && s1[*start] && *start < *end)
			(*start)++;
		if (set[i] == '\0' || *start >= *end)
			break ;
	}
	while (1)
	{
		i = 0;
		while (set[i] != s1[*end] && set[i])
			i++;
		if (set[i] == s1[*end] && *end > *start)
			(*end)--;
		if (set[i] == '\0' || *end <= *start)
			break ;
	}
	return (*end - *start + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*output;
	int		i;

	i = 0;
	end = 0;
	if (ft_strlen(s1) != 0)
		end = ft_strlen(s1) - 1;
	start = 0;
	trimlen(s1, set, &start, &end);
	output = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!output)
		return (NULL);
	ft_bzero(output, (end - start + 2));
	if (end - start + 1 == 1)
		return (output);
	while (start <= end)
	{
		output[i] = s1[start];
		start++;
		i++;
	}
	return (output);
}

// int main(void)
// {
// 	char *str = "      ";
// 	char *set = "da ";
// 	char *ptrstr = ft_strtrim(str, set);

// 	printf("%s, %p\n", ptrstr, ptrstr);
// 	free(ptrstr);

// 	str = "   hello   ";
// 	set = "da ";
// 	ptrstr = ft_strtrim(str, set);

// 	printf("%s, %p\n", ptrstr, ptrstr);
// 	free(ptrstr);

// 	str = "start    ";
// 	set = "da ";
// 	ptrstr = ft_strtrim(str, set);

// 	printf("%s, %p\n", ptrstr, ptrstr);
// 	free(ptrstr);

// 	str = "    end";
// 	set = "da ";
// 	ptrstr = ft_strtrim(str, set);

// 	printf("%s, %p\n", ptrstr, ptrstr);
// 	free(ptrstr);
// }