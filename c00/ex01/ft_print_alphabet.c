/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar <itulgar@k1m13s02.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:48:46 by itulgar           #+#    #+#             */
/*   Updated: 2023/10/23 18:30:36 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	karakter;

	karakter = 'a';
	while (karakter <= 'z')
	{
		write(1, &karakter, 1);
		karakter++;
	}
}
