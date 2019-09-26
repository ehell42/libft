/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:33:07 by ehell             #+#    #+#             */
/*   Updated: 2019/09/26 13:13:02 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	i;

	i = 0;
	if (ft_strlen(str1) != ft_strlen(str2) && (ft_strlen(str1) < count ||
	ft_strlen(str2) < count))
		return (ft_strlen(str1) - ft_strlen(str2));
	while (str1[i] != '\0' && str2[i] != '\0' && i < count)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	if (i == count)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
