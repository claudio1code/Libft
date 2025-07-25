// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_split.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/07/25 09:55:07 by clados-s          #+#    #+#             */
// /*   Updated: 2025/07/25 11:54:28 by clados-s         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			j;
	int				start;
	int				w_count;
	unsigned char	**new_str;
	
	i = 0;
	j = 0;
	start = -1;
	if (!s[i])
		return (NULL);
	w_count = count_words(s, c);
	new_str = (char **)malloc(( w_count + 1) * sizeof(char *));
	if (!new_str)
		return (NULL);
	
}


static int	**fill_array(char const *s, char c, char *new_str)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[*i] != c && start < 0)
			*start = i;
		else if (s[*i] == c || s[*i] == '\0' && start >=0)
		{
			new_str[*j] = ft_substr(s, start, i - start);
			if (!new_str[*j])
				return (ft_free_split(new_str));
			j++;
			start = -1;
		}
		i++;
	}
	
}

static size_t	count_words(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			word++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word);
}

static void	ft_free_split(char **str_array)
{
	int	i;

	i = -1;
	while (str_array[++i])
		free(str_array[i]);
	free(str_array);
}



// static	size_t count_sub(const char *s, char c, char *i)
// {
// 	int	sub;
// 	int inicio;
// 	int fim;

// 	sub = 0;
// 	inicio = 0;
// 	fim = 0;
// 	while (s[*i])
// 	{
// 		if ((s[*i] != c && s[*i -1] == c) || (s[*i] != c && *i == 0))
// 			inicio = *i;
// 		if ((s[*i] != c && s[*i +1] == c) || (s[*i] != c && s[*i + 1 ] == '\0'))
// 			fim = *i;
// 		if (inicio && fim)
// 			break ;
// 		*i++;
// 	}
// 	sub = fim - inicio + 1;
// 	return (sub);
// }

int main(void)
{
	printf("%d", count_words("xxxxhelloxxxxxhelloxxhelloxxhello", "x"));
}