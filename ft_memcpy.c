/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:26:21 by ehell             #+#    #+#             */
/*   Updated: 2019/09/24 16:31:45 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char *)destination;
	tmp2 = (unsigned char *)source;
	i = 0;
	if (tmp1 == NULL && tmp2 == NULL)
		return (NULL);
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (destination);
}
