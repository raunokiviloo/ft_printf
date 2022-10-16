/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiviloo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:32:21 by rkiviloo          #+#    #+#             */
/*   Updated: 2022/10/14 16:32:23 by rkiviloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	lettercount;

	while (*str)
	{
		write(1, str, 1);
		lettercount++;
		str++;
	}
	return (lettercount);
}
