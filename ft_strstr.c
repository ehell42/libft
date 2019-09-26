/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:04:04 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:23:22 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	char	*tmp;

	tmp = ft_strchr(str1, str2[0]);
	if (!str2[0])
	{
		tmp = (char *)str1;
		return (tmp);
	}
	while (tmp)
	{
		if (ft_strncmp(tmp, str2, ft_strlen(str2)) == 0)
			return (tmp);
		else
		{
			tmp++;
			tmp = ft_strchr(tmp, str2[0]);
		}
	}
	return (NULL);
}
