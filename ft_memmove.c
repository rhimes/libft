/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckupfers <ckupfers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 18:19:33 by ckupfers          #+#    #+#             */
/*   Updated: 2016/04/27 18:36:16 by ckupfers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const unsigned char	*src2;
	unsigned char		*dest2;
	unsigned int		i;

	src2 = (const unsigned char*)src;
	dest2 = (unsigned char*)dest;
	i = len - 1;
	if (!len)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest2, src2, len));
	while (i + 1 > 0)
	{
		dest2[i] = src2[i];
		i--;
	}
	return ((void*)dest2);
}
