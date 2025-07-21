/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:42:38 by clados-s          #+#    #+#             */
/*   Updated: 2025/07/21 11:21:40 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s_ptr;
	unsigned char		*d_ptr;

	s_ptr = (const unsigned char *)src;
	d_ptr = (unsigned char *)dest;
	if (d_ptr == s_ptr)
		return (dest);
	if (d_ptr > s_ptr)
	{
		d_ptr = d_ptr + n;
		s_ptr = s_ptr + n;
		while (--n > 0)
			*--d_ptr = *--s_ptr;
	}
	else
		while (--n > 0)
			*++d_ptr = *++s_ptr;
	return (dest);
}
