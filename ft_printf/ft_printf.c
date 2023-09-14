/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <mjavadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:44:41 by mjavadi           #+#    #+#             */
/*   Updated: 2023/05/10 20:18:11 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;
	int		i;

	len = 0;
	i = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i + 1] && str[i] == '%')
		{
			len = len + ft_format(args, str[i + 1]);
			i++;
		}
		else
			len += ft_pchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

int	ft_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = len + ft_pchar((char)va_arg(args, int));
	else if (format == 's')
		len = len + ft_pstr((char *)va_arg(args, char *));
	else if (format == 'p')
		len = len + ft_pptrhex(va_arg(args, uintptr_t));
	else if (format == 'd' || format == 'i')
		len = len + ft_pnb((int)va_arg(args, int));
	else if (format == 'u')
		len = len + ft_punsignednb(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = len + ft_phex(va_arg(args, int), format);
	else if (format == '%')
		len = len + ft_pourcent();
	return (len);
}

int	ft_pchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_pstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		i++;
	}
	ft_putstr_fd(str, 1);
	return (i);
}

int	ft_pourcent(void)
{
	write (1, "%", 1);
	return (1);
}
