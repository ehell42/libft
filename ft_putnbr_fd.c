/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehell <ehell@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:54:15 by ehell             #+#    #+#             */
/*   Updated: 2019/09/20 14:20:55 by ehell            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (fd >= 0)
	{
		if (n <= 0)
			nbr = (-1) * n;
		else
			nbr = n;
		if (n < 0)
			ft_putchar_fd('-', fd);
		if (nbr >= 10)
		{
			ft_putnbr_fd(nbr / 10, fd);
			ft_putnbr_fd(nbr % 10, fd);
		}
		else
			ft_putchar_fd(nbr + '0', fd);
	}
}
