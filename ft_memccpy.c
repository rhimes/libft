/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckupfers <ckupfers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 18:19:33 by ckupfers          #+#    #+#             */
/*   Updated: 2016/04/27 19:33:14 by ckupfers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*ptr_src;
	char			*ptr_dst;
	unsigned char	uc;
	int				i;

	i = 0;
	ptr_src = (char *)src;
	ptr_dst = (char *)dst;
	uc = (unsigned char)c;
	while (n > 0)
	{
		ptr_dst[i] = ptr_src[i];
		if ((unsigned char)ptr_src[i] == uc)
			return (dst + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
