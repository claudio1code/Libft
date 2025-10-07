/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:03:02 by clados-s          #+#    #+#             */
/*   Updated: 2025/10/07 13:44:36 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iputchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_iputstr(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*str)
		count += ft_iputchar(*str++);
	return (count);
}

int	ft_iputnbr(int n)
{
	long	nbr;
	int		count;

	nbr = (long)n;
	count = 0;
	if (nbr < 0)
	{
		count += ft_iputchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += ft_iputnbr(nbr / 10);
	count += ft_iputchar((nbr % 10) + '0');
	return (count);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_unsigned(n / 10);
	count += ft_iputchar((n % 10) + '0');
	return (count);
}

int	ft_puthexa(unsigned long n, const char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthexa(n / 16, base);
	count += ft_iputchar(base[n % 16]);
	return (count);
}
