/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:43:24 by itulgar           #+#    #+#             */
/*   Updated: 2023/11/09 13:28:42 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	index = 2;
	while (index <= (nb / index))
	{
		if (!(nb % index))
			return (0);
		else
			index++;
	}
	return (1);
}
