/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:49:13 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:25:02 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)str;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == ch)
			return (&tmp[i]);
		i++;
	}
	if (ch == '\0')
		return (&tmp[i]);
	return (NULL);
}
