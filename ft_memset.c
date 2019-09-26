/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:21:35 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:20:26 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *destination, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;

	dst = destination;
	i = 0;
	while (i < n)
	{
		dst[i] = c;
		i++;
	}
	return (destination);
}
