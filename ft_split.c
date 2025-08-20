#include "libft.h"

void strcount(int *counter, char const *s, int i)
{
	*counter = 1;
	if (ft_strlen(s) > 0)
		*counter++;
	while (s[i])
	{
		if (s[i] == c)
			*counter++;
		i++;
	}

}

//start inclusive, end not inclusive
void strcopy(char *dest, char const *s, int start, int end)
{
	int	i;

	i = 0;
	while (start < end - 1)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	
}

char **ft_split(char const *s, char c)
{
	int		counter;
	int		i;
	char	**arr;
	int		arridx;

	i = 0;
	strcount(&counter, s, i);
	arr = (char **)malloc(sizeof(char *) * counter);
	if(!arr)
		return (NULL);
	ft_bzero(arr, counter);
	counter = 0;
	arridx = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			arr[arridx] = (char *)malloc(sizeof() i - counter + 1 );
			ft_bzero(arr[arridx], i - counter + 1);
			strcopy(arr[arridx], s, counter, i);
			counter = i + 1;
			arridx++;
		}
		i++;
	}



}

// int main()
// // {

// }