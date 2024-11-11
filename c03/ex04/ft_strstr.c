/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:43:06 by itulgar           #+#    #+#             */
/*   Updated: 2023/11/02 18:19:57 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tfi;

	tfi = 0;
	i = 0;
	if (to_find[tfi] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		tfi = 0;
		while (str[i + tfi] == to_find[tfi] && to_find[tfi] != '\0')
		{
			tfi++;
		}
		if (to_find[tfi] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
