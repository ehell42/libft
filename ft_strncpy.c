/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:13:23 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:22:48 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destptr, const char *srcptr, size_t num)
{
	size_t	i;

	i = 0;
	while (srcptr[i] != '\0' && i < num)
	{
		destptr[i] = srcptr[i];
		i++;
	}
	while (i < num)
	{
		destptr[i] = '\0';
		i++;
	}
	return (destptr);
}
