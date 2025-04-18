/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:11:34 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/15 19:56:54 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	correr_linha(int x, int y, int linha, int coluna)
{
	if (linha == y || linha == 1)
	{
		if (linha == y && (coluna == 1 || coluna == x))
		{
			ft_putchar('A');
		}
		else if (linha == 1 && (coluna == 1 || coluna == x))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
	else if (coluna == x || coluna == 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	cols;
	int	rows;

	cols = x;
	rows = y;
	while (rows > 0)
	{
		while (cols > 0)
		{
			correr_linha(x, y, rows, cols);
			cols--;
		}
		ft_putchar('\n');
		rows--;
		cols = x;
	}
}

int	main(void)
{
	rush(10, 10);
	return (0);
}
