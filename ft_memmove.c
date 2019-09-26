/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:45:48 by ehell             #+#    #+#             */
/*   Updated: 2019/09/24 16:33:09 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char *)destination;
	tmp2 = (unsigned char *)source;
	i = 0;
	if (tmp1 == NULL && tmp2 == NULL)
		return (NULL);
	if (tmp1 < tmp2)
		while (i < n)
		{
			tmp1[i] = tmp2[i];
			i++;
		}
	else
	{
		i = n;
		while (i > 0)
		{
			tmp1[i - 1] = tmp2[i - 1];
			i--;
		}
	}
	return (destination);
}
