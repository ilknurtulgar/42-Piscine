/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar <itulgar@k1m13s02.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:00:31 by itulgar           #+#    #+#             */
/*   Updated: 2023/10/23 14:46:24 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	karakter;

	karakter = 'z';
	while (karakter >= 'a')
	{
		write(1, &karakter, 1);
		karakter--;
	}
}
