/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   han2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <klafi@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:11:11 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 16:03:59 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*han_x(char const *s, int idx, va_list list)
{
	char	*sub;
	char	*new;

	sub = dec_to_hex(va_arg(list, unsigned int));
	new = malloc(ft_strlen(s) + ft_strlen(sub) - 1);
	new = str_ins(s, sub, idx);
	return (new);
}

char	*han_xcap(char const *s, int idx, va_list list)
{
	char	*sub;
	char	*new;

	sub = dec_to_hex(va_arg(list, unsigned int));
	sub = ft_strtoupper(sub);
	new = malloc(ft_strlen(s) + ft_strlen(sub) - 1);
	new = str_ins(s, sub, idx);
	return (new);
}

char	*han_mod(char const *s, int idx)
{
	char	*sub;
	char	*new;

	sub = malloc(2);
	sub[0] = '%';
	sub[1] = 0;
	new = malloc(ft_strlen(s) + ft_strlen(sub) - 1);
	new = str_ins(s, sub, idx);
	return (new);
}

char	*str_ins(const char *org, const char *ins, int idx)
{
	char	*new;

	new = ft_strjoin(ft_substr(org, 0, idx), ins);
	new = ft_strjoin(new, ft_substr(org, idx + 2, ft_strlen(org)));
	return (new);
}
