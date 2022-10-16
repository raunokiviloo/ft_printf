/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiviloo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:44:34 by rkiviloo          #+#    #+#             */
/*   Updated: 2022/10/16 12:44:36 by rkiviloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_printptr_rec(unsigned long long ptr, int *byteswritten)
{
	if (ptr >= 16)
	{
		ft_printptr_rec(ptr / 16, byteswritten);
		ft_printptr_rec(ptr % 16, byteswritten);
	}
	else
	{
		if (ptr <= 9)
			*byteswritten += ft_printchr('0' + ptr);
			
		else
			*byteswritten += ft_printchr('a' + ptr % 10);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	byteswritten;
	
	byteswritten = ft_printstr("0x");
	if (!ptr)
		byteswritten += ft_printchr('0');
	else
		ft_printptr_rec(ptr, &byteswritten); 
	return (byteswritten);
}
