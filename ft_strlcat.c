/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:37:39 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:22:18 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!dest && !src)
		return (0);
	if (size > ft_strlen(dest))
	{
		while (dest[i])
			i++;
		while (src[n] != '\0' && i + 1 < size)
		{
			dest[i] = src[n];
			n++;
			i++;
		}
		dest[i] = '\0';
	}
	i = size + ft_strlen(src) - n;
	if (size > ft_strlen(dest))
		i = ft_strlen(dest) + ft_strlen(src) - n;
	return (i);
}
