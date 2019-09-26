/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:13:05 by ehell             #+#    #+#             */
/*   Updated: 2019/09/24 19:16:53 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_len(unsigned int n)
{
	size_t	len;

	len = 1;
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char			*tmp;
	size_t			len;
	unsigned int	nbr;

	len = 0;
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	else
		nbr = n;
	len += nbr_len(nbr);
	if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
		tmp[0] = '-';
	tmp[len] = '\0';
	while (len > 0 && (nbr != 0 || n == 0))
	{
		tmp[len - 1] = '0' + (nbr % 10);
		nbr /= 10;
		len--;
	}
	return (tmp);
}
