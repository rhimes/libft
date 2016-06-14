/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckupfers <ckupfers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 18:19:33 by ckupfers          #+#    #+#             */
/*   Updated: 2016/04/27 18:21:31 by ckupfers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ispunct(int c)
{
	if (((unsigned char)c > 32 && (unsigned char)c < 48)
			|| ((unsigned char)c > 57 && (unsigned char)c < 64)
			|| ((unsigned char)c > 90 && (unsigned char)c < 97)
			|| ((unsigned char)c > 122 && (unsigned char)c < 127))
		return (c);
	return (0);
}
