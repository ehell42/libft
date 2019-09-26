/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:51:36 by ehell             #+#    #+#             */
/*   Updated: 2019/09/24 17:06:38 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	sm;
	size_t			i;

	tmp = (unsigned char *)arr;
	sm = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == sm)
			return ((void*)&tmp[i]);
		i++;
	}
	return (NULL);
}
