/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:53:46 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/21 20:06:48 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	unsigned int	slen;

	slen = ft_strlen(s);
	res = malloc(((slen + 1) * sizeof(char)));
	if (!res)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[slen] = 0;
	return (res);
}
