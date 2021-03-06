/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_icntrl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckupfers <ckupfers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 18:19:33 by ckupfers          #+#    #+#             */
/*   Updated: 2016/04/27 18:19:02 by ckupfers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iscntrl(int c)
{
	if (((unsigned char)c >= 0 && (unsigned char)c < 32)
			|| (unsigned char)c == 127)
		return (c);
	return (0);
}
