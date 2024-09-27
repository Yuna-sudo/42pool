/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypoulett <ypoulett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 03:01:43 by ypoulett          #+#    #+#             */
/*   Updated: 2024/09/27 03:12:17 by ypoulett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int nb1, int nb2)
{
	int	first;
	int	second;
	int	third;
	int	four;

	first = nb1 / 10;
	second = nb1 % 10;
	third = nb2 / 10;
	four = nb2 % 10;
	ft_putchar(first + '0');
	ft_putchar(second + '0');
	ft_putchar(' ');
	ft_putchar(third + '0');
	ft_putchar(four + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_display(i, j);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
