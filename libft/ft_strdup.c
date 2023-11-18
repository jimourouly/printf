/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:34:41 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/21 19:56:17 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	char	*str;

	str = (char *) s1;
	i = 0;
	new = (char *) malloc(sizeof(char) * ft_strlen(str) +1);
	if (!new)
		return (NULL);
	while (*str)
	{
		new[i] = *str++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
