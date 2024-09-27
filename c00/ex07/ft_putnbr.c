/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypoulett <ypoulett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 03:27:10 by ypoulett          #+#    #+#             */
/*   Updated: 2024/09/27 03:35:59 by ypoulett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr <= -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	else if (nbr >= 0)
		ft_putchar(nbr + '0');
}

int	main(void)
{
	ft_putnbr(-42);
	return (0);
}
