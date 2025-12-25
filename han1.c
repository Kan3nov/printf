/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   han1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <klafi@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:03:01 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 16:40:43 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*han_c(char const *s, int idx, va_list list)
{
	char	*sub;
	char	*new;

	sub = malloc(2);
	sub[0] = (char)va_arg(list, int);
	sub[1] = 0;
	new = malloc (ft_strlen(s) + 1 + 1 - 2);
	new = str_ins(s, sub, idx);
	return (new);
}

char	*han_s(char const *s, int idx, va_list list)
{
	char	*sub;
	char	*new;

	sub = va_arg(list, char *);
	new = malloc(ft_strlen(s) + ft_strlen(sub) - 1);
	new = str_ins(s, sub, idx);
	return (new);
}

char	*han_p(char const *s, int idx, va_list list)
{
	char			*sub;
	unsigned long	add;
	char			*new;
	void			*p;

	p = va_arg(list, void *);
	if (!p)
	{
		sub = malloc(6);
		sub = "(nil)";
	}
	else
	{
		add = (unsigned long)p;
		sub = dec_to_hex(add);
		sub = ft_strjoin("0x", sub);
	}
	new = malloc(ft_strlen(s) + ft_strlen(sub) - 1);
	new = str_ins(s, sub, idx);
	return (new);
}

char	*han_di(char const *s, int idx, va_list list)
{
	char	*sub;
	char	*new;

	sub = ft_itoa(va_arg(list, int));
	new = malloc(ft_strlen(s) + ft_strlen(sub) - 1);
	new = str_ins(s, sub, idx);
	return (new);
}

char	*han_u(char const *s, int idx, va_list list)
{
	char	*sub;
	char	*new;

	sub = ft_utoa(va_arg(list, unsigned int));
	new = malloc(ft_strlen(s) + ft_strlen(sub) - 1);
	new = str_ins(s, sub, idx);
	return (new);
}
