/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckupfers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 14:37:11 by ckupfers          #+#    #+#             */
/*   Updated: 2016/04/27 18:49:04 by ckupfers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	char			*str_new;
	unsigned int	i;

	str = (char *)s;
	i = 0;
	if (!(str_new = ft_memalloc(ft_strlen(str) + 1)))
		return (NULL);
	while (str[i])
	{
		str_new[i] = (*f)(str[i]);
		i++;
	}
	str_new[i] = '\0';
	return (str_new);
}
