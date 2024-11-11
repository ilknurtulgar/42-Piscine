/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sterlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:44:36 by itulgar           #+#    #+#             */
/*   Updated: 2023/10/29 16:53:33 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}