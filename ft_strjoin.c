/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:59:14 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:22:05 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	tmp = NULL;
	if (s1 && s2)
		tmp = (char *)malloc(sizeof(char) *
			(ft_strlen(s1) + (ft_strlen(s2) + 1)));
	if (tmp)
	{
		tmp[0] = '\0';
		ft_strcat(tmp, s1);
		ft_strcat(tmp, s2);
		return (tmp);
	}
	return (NULL);
}
