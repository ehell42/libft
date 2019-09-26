/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:00:11 by ehell             #+#    #+#             */
/*   Updated: 2019/09/25 18:24:39 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '-' && (str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	return (i);
}

static int	what_sign(const char *str, size_t i)
{
	if (str[i] == '-')
		return (-1);
	return (1);
}

int			ft_atoi(const char *str)
{
	size_t				i;
	unsigned long long	nbr;
	int					sign;

	i = skip(str);
	nbr = 0;
	sign = what_sign(str, i);
	if (sign == -1)
		i++;
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (sign == 1 && nbr >= 9223372036854775807)
		return (-1);
	if (sign == -1 && nbr > 9223372036854775807)
		return (0);
	return (nbr * sign);
}
