/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:30:15 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/21 20:00:37 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*new;
	int		lentot;

	i = 0;
	j = 0;
	lentot = (ft_strlen(s1) + ft_strlen(s2));
	new = (char *) malloc((lentot + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		new[j++] = s2[i++];
	}
	new[j] = 0;
	return (new);
}
