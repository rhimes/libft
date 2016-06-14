/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckupfers <ckupfers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 18:19:33 by ckupfers          #+#    #+#             */
/*   Updated: 2016/04/27 18:33:00 by ckupfers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *abc;
	unsigned char *def;

	if (s1 && s2)
	{
		abc = (unsigned char *)s1;
		def = (unsigned char *)s2;
		while (n)
		{
			if (*abc != *def)
				return (*abc - *def);
			abc++;
			def++;
			n--;
		}
	}
	return (0);
}
