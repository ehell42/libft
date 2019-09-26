/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:30:07 by ehell             #+#    #+#             */
/*   Updated: 2019/09/25 19:31:36 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	size_t	i;

	tmp = NULL;
	i = 0;
	tmp = (char *)malloc(sizeof(char) * (size + 1));
	if (tmp == NULL)
		return (NULL);
	while (i < size)
		tmp[i++] = '\0';
	tmp[i] = '\0';
	return (tmp);
}
