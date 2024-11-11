/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar <itulgar@k1m13s02.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:38:53 by itulgar           #+#    #+#             */
/*   Updated: 2023/10/23 15:28:32 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pozitif;
	char	negatif;

	pozitif = 'P';
	negatif = 'N';
	if (n < 0)
	{
		write(1, &negatif, 1);
	}
	else
	{
		write(1, &pozitif, 1);
	}
}
