/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tool2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:00:15 by cserrano          #+#    #+#             */
/*   Updated: 2023/05/11 16:53:26 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(unsigned long hex, int *count, char x)
{
	if (hex >= 16)
	{
		ft_hex(hex / 16, count, x);
		ft_hex(hex % 16, count, x);
	}
	if (hex < 16)
	{
		if (hex < 10)
			ft_char ((hex + 48), count);
		else
		{
			if (x == 'x')
				ft_char((hex + 87), count);
			if (x == 'X')
				ft_char((hex + 55), count);
		}
	}
}

void	ft_pointer(void *pt, int *count)
{
	ft_printstr(("0x"), count);
	ft_hex((unsigned long long)pt, count, 'x');
}
