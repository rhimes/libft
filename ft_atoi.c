/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckupfers <ckupfers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 16:13:07 by ckupfers          #+#    #+#             */
/*   Updated: 2016/04/27 18:24:20 by ckupfers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_res(const char *str, int i, int len)
{
	int power;
	int res;

	res = 0;
	power = 1;
	while (len-- > 0)
	{
		res = res + (str[i] - 48) * power;
		power = power * 10;
		i--;
	}
	if (str[i] == '-')
		res = -res;
	return (res);
}

int			ft_atoi(const char *str)
{
	int len;
	int i;

	i = 0;
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
				|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	if ((str[i] < 48 || str[i] > 58) && ((str[i] == 43 || str[i] == 45)
				&& (str[i + 1] < 48 || str[i + 1] > 58)))
		return (0);
	if (str[i] == 43 || str[i] == 45)
		i++;
	len = 0;
	while (str[i] < 59 && str[i] > 47)
	{
		len++;
		i++;
	}
	i--;
	return (ft_res(str, i, len));
}
