/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:10:19 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:22:41 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t count)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[n] != '\0' && n < count)
	{
		str1[i] = str2[n];
		i++;
		n++;
	}
	str1[i] = '\0';
	return (str1);
}
