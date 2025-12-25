/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <klafi@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:29:16 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 16:06:03 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
//the subsequent include statements will be omitted after testing
# include <stdio.h>

int		dig_num_hex(unsigned long dec);

char	*dec_to_hex(unsigned long dec);

char	*han_c(char const *s, int idx, va_list list);

char	*han_s(char const *s, int idx, va_list list);

char	*han_p(char const *s, int idx, va_list list);

char	*han_di(char const *s, int idx, va_list list);

char	*han_u(char const *s, int idx, va_list list);

char	*han_x(char const *s, int idx, va_list list);

char	*han_xcap(char const *s, int idx, va_list list);

char	*han_mod(char const *s, int idx);

char	*str_ins(const char *org, const char *ins, int idx);

int		ft_printf(const char *s, ...);

char	*ft_utoa(unsigned int n);

char	*ft_strtoupper(char *s);

#endif
