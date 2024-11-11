/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:58:58 by itulgar           #+#    #+#             */
/*   Updated: 2023/10/25 11:08:36 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combination(char yuzler, char onlar, char birler)
{
	ft_putchar(yuzler);
	ft_putchar(onlar);
	ft_putchar(birler);
}

void	ft_print_comb(void)
{
	char	yuzler;
	char	onlar;
	char	birler;

	yuzler = '0';
	while (yuzler <= '7')
	{
		onlar = yuzler + 1;
		while (onlar <= '8')
		{
			birler = onlar + 1;
			while (birler <= '9')
			{
				ft_print_combination (yuzler, onlar, birler);
				if (yuzler != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				birler++;
			}
			onlar++;
		}
		yuzler++;
	}
}
