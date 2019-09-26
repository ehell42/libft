/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:06:18 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:23:30 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	first;
	size_t	last;
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	if (s)
	{
		while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
			i++;
		first = i;
		last = ft_strlen(s) - 1;
		while ((s[last] == ' ' || s[last] == '\n' || s[last] == '\t') && last)
			last--;
		if (last >= first)
		{
			tmp = ft_strnew(last - first + 1);
			if (tmp)
				tmp = ft_strncpy(tmp, &s[first], last - first + 1);
		}
		else
			tmp = ft_strnew(0);
	}
	return (tmp);
}
