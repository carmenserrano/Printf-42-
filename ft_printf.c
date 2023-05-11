/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:05:53 by cserrano          #+#    #+#             */
/*   Updated: 2023/05/11 16:43:13 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control(const char c, va_list args, int *count)
{
	if (c == 'c')
		ft_char(va_arg(args, int), count);
	else if (c == 's')
		ft_printstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_number(va_arg(args, int), count);
	else if (c == 'u')
		ft_unsigned (va_arg(args, unsigned int), count);
	else if (c == '%')
		ft_char('%', count);
	else if (c == 'x')
		ft_hex(va_arg(args, unsigned int), count, 'x');
	else if (c == 'X')
		ft_hex(va_arg(args, unsigned int), count, 'X');
	else if (c == 'p')
		ft_pointer(va_arg(args, void *), count);
}

int	ft_printf(char const *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
		{
			ft_char(s[i], &count);
				i++;
		}
		if (s[i] == '%')
		{
			i++;
			ft_control(s[i], args, &count);
			i++;
		}
	}
	va_end(args);
	return (count);
}
