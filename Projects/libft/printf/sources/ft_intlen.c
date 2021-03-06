/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalestr <jbalestr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 16:15:08 by jbalestr          #+#    #+#             */
/*   Updated: 2013/12/21 16:36:20 by jbalestr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_intlen(int nb)
{
	int		len;

	len = 1;
	if (nb < 0)
		len++;
	while (nb / 10 != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}
