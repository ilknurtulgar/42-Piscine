/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:44:16 by itulgar           #+#    #+#             */
/*   Updated: 2023/10/31 13:36:14 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalizennext;

	i = 0;
	capitalizennext = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (capitalizennext)
			{
				str[i] = str[i] - 32;
				capitalizennext = 0;
			}
		}
		else
		{
			capitalizennext = 1;
		}
		i++;
	}
	return (str);
}
