/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:58:55 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:23:12 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;
	size_t	nbr;
	int		count;
	char	*tmp;

	i = 0;
	nbr = 0;
	count = 0;
	tmp = (char *)str;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == ch)
		{
			nbr = i;
			count++;
		}
		i++;
	}
	if (ch == '\0')
		return (&tmp[i]);
	if (count != 0)
		return (&tmp[nbr]);
	return (NULL);
}
