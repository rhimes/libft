/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckupfers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/20 14:37:11 by ckupfers          #+#    #+#             */
/*   Updated: 2016/04/27 18:54:35 by ckupfers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*str_new;
	unsigned int	i;

	if (!(str_new = ft_strnew(len)) || (int)len < 0)
		return (NULL);
	str = (char *)s;
	i = 0;
	while (i < len)
	{
		str_new[i] = str[start];
		start++;
		i++;
	}
	return (str_new);
}
