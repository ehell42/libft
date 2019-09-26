/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:51:20 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:23:26 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;

	tmp = NULL;
	i = 0;
	if (s)
		tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp)
	{
		while (i < len)
		{
			tmp[i] = s[i + start];
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
