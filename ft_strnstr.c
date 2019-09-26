/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:15:59 by ehell             #+#    #+#             */
/*   Updated: 2019/09/25 17:43:08 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmp(char *str1, const char *str2, size_t len, size_t l2)
{
	size_t	i;

	i = 0;
	while (str1[i] == str2[i] && i < len && i < l2 && len >= l2)
		i++;
	if (i == l2 && l2 != 1)
		return (0);
	else if (l2 == 1 && str1[0] == str2[0])
		return (0);
	else
		return (1);
}

char		*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)str1;
	if (!str2[0])
		return (tmp);
	if (len != 0)
		while (tmp[i] && i < len)
		{
			if (cmp(&tmp[i], str2, len - i, ft_strlen(str2)) == 0)
				return (&tmp[i]);
			else
				i++;
		}
	return (NULL);
}
