/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:08:56 by itulgar           #+#    #+#             */
/*   Updated: 2023/11/09 13:26:24 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	index = 2;
	while (index <= nb / index)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
