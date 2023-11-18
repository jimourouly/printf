/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:31:53 by jroulet           #+#    #+#             */
/*   Updated: 2023/11/18 16:50:55 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_uitoa(unsigned int uns)
{
	char	*res;
	int		length;

	length = 0;
	length = ft_uns_len(uns);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	while (uns != 0)
	{
		res[len - 1] = uns % 10 + 48;
		uns = uns / 10;
		len--;
	}
	return (res);
}
