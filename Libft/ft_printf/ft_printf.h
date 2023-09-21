/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:13:51 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/21 14:15:59 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_ptr(unsigned long long nb);
int	ft_unsigned_len(unsigned int nb);
int	ft_unsigned(unsigned int nb);
int	ft_hexa(unsigned int nb, char format);
int	ft_hexa_len(unsigned int nb);

#endif
