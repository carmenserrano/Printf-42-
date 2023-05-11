/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tool1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:00:27 by cserrano          #+#    #+#             */
/*   Updated: 2023/05/11 16:51:27 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_printstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
		ft_printstr("(null)", count);
	else
	{
		while (s[i] != '\0')
		{
			ft_char(s[i++], count);
		}
	}
}

void	ft_number(int nb, int *count)
{
	if (nb == -2147483648)
	{
		ft_printstr("-2147483648", count);
	}
	else if (nb != -2147483648)
	{	
		if (nb < 0)
		{
			ft_char(('-'), count);
			nb *= -1;
		}	
		if (nb >= 10)
		{
			ft_number((nb / 10), count);
			ft_char ((nb % 10 + '0'), count);
		}
		else
			ft_char((nb + '0'), count);
	}
}

void	ft_unsigned(unsigned int nb, int *count)
{
	if (nb >= 10)
	{
		ft_unsigned((nb / 10), count);
		ft_char((nb % 10 + '0'), count);
	}
	if (nb < 10)
		ft_char(nb + '0', count);
}
