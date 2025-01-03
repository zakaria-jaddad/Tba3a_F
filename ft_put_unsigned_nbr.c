/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:18:15 by zajaddad          #+#    #+#             */
/*   Updated: 2024/12/24 18:42:04 by zajaddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_put_unsigned_nbr(unsigned int n, int *counter)
{
	if (n < 10)
		*counter += ft_putchar((n + '0'));
	else
	{
		ft_putnbr((n / 10), counter);
		*counter += ft_putchar(((n % 10) + '0'));
	}
}
