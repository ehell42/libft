/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:36:13 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:22:34 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	size_t	i;

	tmp = NULL;
	i = 0;
	if (s)
		tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (tmp)
	{
		while (s[i] != '\0')
		{
			tmp[i] = f(s[i]);
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
