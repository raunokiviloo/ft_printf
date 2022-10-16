#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_printchr(char c);
int	ft_printstr(char *str);
int	ft_printptr(unsigned long long ptr);
int	ft_printnum(int num);
int	ft_printunsigned(unsigned int num);
int	ft_printhex(unsigned int num, char type);
int	ft_printpercent(void);

#endif
