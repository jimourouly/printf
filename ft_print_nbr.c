/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:31:10 by jroulet           #+#    #+#             */
/*   Updated: 2023/11/18 21:06:27 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_nbr(int n)
{
	int	length;
	char	*tab;

	tab = ft_itoa(n);
	length = ft_print_str(tab);
	free(tab);
	return (length);
}
