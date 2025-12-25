/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klafi <klafi@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 14:25:11 by klafi             #+#    #+#             */
/*   Updated: 2025/12/25 14:30:39 by klafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strtoupper(char	*s)
{
	char	*new;
	int		idx;

	new = malloc(ft_strlen(s) + 1);
	idx = 0;
	while (s[idx])
	{
		new[idx] = ft_toupper(s[idx]);
		idx++;
	}
	new[idx] = 0;
	return (new);
}
