/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <klafi@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 12:25:45 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 14:35:15 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	count_dig(unsigned int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static unsigned long	power(unsigned int base, int exp)
{
	unsigned long	result;

	result = 1;
	while (exp-- > 0)
		result *= base;
	return (result);
}

char	*ft_utoa(unsigned int n)
{
	char	*s;
	size_t	idx;
	size_t	len;

	len = count_dig(n);
	s = malloc(len + 1);
	idx = 0;
	while (len >= 1)
		s[idx++] = '0' + n / power(10, len-- - 1) % 10;
	s[idx] = 0;
	return (s);
}
