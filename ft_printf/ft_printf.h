/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjavadi <mjavadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 02:53:05 by mjavadi           #+#    #+#             */
/*   Updated: 2023/05/10 20:17:43 by mjavadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_format(va_list args, const char format);
int		ft_pchar(char c);
int		ft_pstr(char *str);
int		ft_pourcent(void);
int		ft_lenh(unsigned int nb);
int		ft_phex(unsigned int nb, const char format);
int		ft_nblen(unsigned int nb);
int		ft_pnb(int nb);
char	*ft_upnb(unsigned int nb);
int		ft_punsignednb(unsigned int nb);
int		ft_lenhex(uintptr_t	nb);
int		ft_pptrhex(unsigned long long nb);

void	ft_ptrh(unsigned int nb, const char format);
void	ft_ptrhex(uintptr_t nb);

#endif 
