/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <klafi@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:25:19 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 16:45:18 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dig_num_hex(unsigned long dec)
{
	int	dig_num;

	dig_num = 1;
	while (dec / 16)
	{
		dig_num++;
		dec /= 16;
	}
	return (dig_num);
}

char	*dec_to_hex(unsigned long dec)
{
	int		dig;
	int		dig_num;
	char	*hex;

	dig_num = dig_num_hex(dec);
	hex = malloc(dig_num + 1);
	hex[dig_num] = 0;
	while (--dig_num >= 0)
	{
		dig = dec % 16;
		dec /= 16;
		if (dig >= 10)
			hex[dig_num] = 87 + dig;
		else
			hex[dig_num] = dig + '0';
	}
	return (hex);
}

char	*gen_str(const char *s, int idx, va_list list)
{
	if (*(s + idx) == '%')
	{
		if (*(s + idx + 1) == 'c')
			s = han_c(s, idx, list);
		else if (*(s + idx + 1) == 's')
			s = han_s(s, idx, list);
		else if (*(s + idx + 1) == 'p')
			s = han_p(s, idx, list);
		else if (*(s + idx + 1) == 'd' || *(s + idx + 1) == 'i')
			s = han_di(s, idx, list);
		else if (*(s + idx + 1) == 'u')
			s = han_u(s, idx, list);
		else if (*(s + idx + 1) == 'x')
			s = han_x(s, idx, list);
		else if (*(s + idx + 1) == 'X')
			s = han_xcap(s, idx, list);
		else if (*(s + idx + 1) == '%')
			s = han_mod(s, idx);
	}
	return ((char *)s);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		idx;
	int		len;

	va_start(list, s);
	idx = 0;
	while (*(s + idx))
	{
		s = gen_str(s, idx, list);
		idx++;
	}
	va_end(list);
	ft_putstr_fd((char *)s, 1);
	len = ft_strlen(s);
	free((char *)s);
	return (len);
}

int main(void)
{
	ft_printf("hello world %s %d\n","kanana", 12);
	return (0);
}
