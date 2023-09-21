/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:20:56 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/21 14:11:33 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_len(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_unsigned(unsigned int nb)
{
	int	len;

	len = ft_unsigned_len(nb);
	if (nb > 9)
	{
		ft_unsigned(nb / 10);
		ft_unsigned(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (len);
}

int	ft_hexa_len(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_hexa(unsigned int nb, char format)
{
	int	len;

	len = ft_hexa_len(nb);
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (nb >= 16)
	{
		ft_hexa(nb / 16, format);
		ft_hexa(nb % 16, format);
	}
	else if (nb > 9)
	{
		if (format == 'x')
			ft_putchar((nb - 10) + 'a');
		else if (format == 'X')
			ft_putchar((nb - 10) + 'A');
	}
	else
		ft_putchar(nb + '0');
	return (len);
}
