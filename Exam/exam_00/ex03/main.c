/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/16 15:47:24 by exam              #+#    #+#             */
/*   Updated: 2014/01/16 18:01:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ordalph.h"
#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
		ord_alphlong(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}