/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:25:51 by clados-s          #+#    #+#             */
/*   Updated: 2025/07/24 17:00:35 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		sub_len;
	char	*sub;
	char	*ptr;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	ptr = (char *)&s1[start];
	while (end > start && ft_strchr(set, s1[end -1]))
		--end;
	sub_len = end - start;
	sub = malloc((unsigned int)sub_len + 1 * sizeof(char));
	if (!sub)
		return (NULL);
	start = -1;
	while (&ptr[++start] < &s1[end])
		sub[start] = ptr[start];
	sub[start] = '\0';
	return (sub);
}
