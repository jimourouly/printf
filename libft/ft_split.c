/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:15:31 by jroulet           #+#    #+#             */
/*   Updated: 2023/10/25 15:32:35 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *str, char sep)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (*str)
	{
		if (*str != sep && i == 0)
		{
			i = 1;
			cnt++;
		}
		else if (*str == sep)
			i = 0;
		str++;
	}
	return (cnt);
}

static void	*ft_free(char **tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static void	ft_initiate_vars(size_t *i, size_t *j, int *start_word )
{
	*i = 0;
	*j = 0;
	*start_word = -1;
}

static char	*putword(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (0);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		j;
	int			start_word;

	ft_initiate_vars(&i, &j, &start_word);
	tab = ft_calloc((count_word(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start_word < 0)
			start_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start_word >= 0)
		{
			tab[j] = putword(s, start_word, i);
			if (!(tab[j]))
				return (ft_free(tab, j));
			start_word = -1;
			j++;
		}
		i++;
	}
	return (tab);
}
