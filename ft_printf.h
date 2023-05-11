/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:01:26 by cserrano          #+#    #+#             */
/*   Updated: 2023/05/11 16:33:13 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_char(char c, int *count);
void	ft_printstr(char *s, int *count);
void	ft_number(int nb, int *count);
void	ft_unsigned(unsigned int nb, int *count);
void	ft_hex(unsigned long hex, int *count, char x);
void	ft_pointer(void *pt, int *count);

#endif
