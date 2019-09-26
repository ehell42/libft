/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:05:35 by ehell             #+#    #+#             */
/*   Updated: 2019/09/25 19:24:21 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numbr(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char		*my_word(char const *s, char c)
{
	char	*tmp;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[len] != c)
		len++;
	tmp = NULL;
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp)
	{
		while (i < len)
		{
			tmp[i] = *s;
			i++;
			s++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}

static char		**delete_all(char **tmp, size_t i)
{
	size_t	k;

	k = 0;
	while (k < i)
	{
		free(tmp[k]);
		k++;
	}
	free(tmp);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	nbr;
	char	**tmp;
	size_t	i;

	i = 0;
	tmp = NULL;
	if (s)
	{
		nbr = numbr(s, c);
		if ((tmp = (char **)malloc(sizeof(char *) * (nbr + 1))))
		{
			while (i < nbr)
			{
				while (*s == c)
					s++;
				if (!(tmp[i] = my_word(s, c)))
					return (delete_all(tmp, i));
				while (*s != c && *s)
					s++;
				i++;
			}
			tmp[i] = NULL;
		}
	}
	return (tmp);
}
