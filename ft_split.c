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

// #include "libft.h"

// char	**ft_split(char const *s, char c)
// {
// 	int				i;
// 	int				w_count;
// 	unsigned char	**new_str;
	
	
// 	i = -1;
// 	if (!s[i])
// 		return (NULL);
// 	new_str = malloc((unsigned int)count_words(s, c) + 1 * sizeof(char **));
// 	if (!new_str)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		while (s[++i] && count_sub(s, c, i))
// 			new_str = malloc((unsigned int)count_sub(s, c, i) + 1 * sizeof(char **));
			
		
// 	}
	
	
// }

// static	size_t count_words(const char *s, char c)
// {
// 	int	i;
// 	int	word;

// 	i = 0;
// 	word = 0;
// 	while (s[i])
// 	{
// 		while (s[i] == c && s)
// 			i++;
// 		if (s[i])
// 			word++;
// 		while (s[i] != c && s[i])
// 			i++;
// 	}
// 	return (word);
// }

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

// int main(void)
// {
// 	printf("%d", count_words("xxxxhelloxxxxxhelloxxhelloxxhello", "x"));
// }