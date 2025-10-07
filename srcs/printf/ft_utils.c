/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:03:02 by clados-s          #+#    #+#             */
/*   Updated: 2025/10/07 12:17:38 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_pf(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_pf(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*str)
		count += ft_putchar_pf(*str++);
	return (count);
}

int	ft_putnbr_pf(int n)
{
	long	nbr;
	int		count;

	nbr = (long)n;
	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar_pf('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += ft_putnbr_pf(nbr / 10);
	count += ft_putchar_pf((nbr % 10) + '0');
	return (count);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_unsigned(n / 10);
	count += ft_putchar_pf((n % 10) + '0');
	return (count);
}

int	ft_puthexa(unsigned long n, const char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthexa(n / 16, base);
	count += ft_putchar_pf(base[n % 16]);
	return (count);
}
