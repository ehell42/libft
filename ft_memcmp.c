/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:59:42 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:20:09 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	i = 0;
	tmp1 = (unsigned char *)memptr1;
	tmp2 = (unsigned char *)memptr2;
	while (i < num)
	{
		if (tmp1[i] == tmp2[i])
			i++;
		else
			return (tmp1[i] - tmp2[i]);
	}
	if (i == num)
		return (0);
	return (tmp1[i] - tmp2[i]);
}
