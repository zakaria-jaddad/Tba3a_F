#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <libc.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// helper function
void	ft_putnbr(int n, int *counter);
void	ft_put_unsigned_nbr(unsigned int n, int *counter);
void	ft_puthex(size_t n, const char *base, int *counter);
void	ft_putaddress(size_t address, int *counter);
size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(char *s);

int		ft_printf(const char *, ...);

#endif
