#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	int counter = 0;
	const char *fmt = format;
	/* 
	 * declare ap that will refer to each argument
	 * ap stands for argument pointer
	 */
	va_list ap;

	/* initialize ap to point the first unnamed argument */
	va_start(ap, format); 

	/* keep iterating over the string */ 
	while (*fmt)
	{
		// if current character not '%'
		if (*fmt != '%')
		{
			counter += ft_putchar(*fmt++);
			continue ;	
		}
		// 100% previous character is %
		if (*(++fmt) == 'c')
			counter += ft_putchar(va_arg(ap, int));
		else if (*fmt == 's')
			counter += ft_putstr(va_arg(ap, char *));
		else if (*fmt == 'p') /* todo */
			ft_putaddress((size_t) va_arg(ap, void *), &counter);
		else if (*fmt == 'd' || *fmt == 'i') 
			ft_putnbr(va_arg(ap, int), &counter);
		else if (*fmt == 'u')
			ft_put_unsigned_nbr(va_arg(ap, unsigned int), &counter);
		else if (*fmt == 'x')
			ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef", &counter);
		else if (*fmt == 'X')
			ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF", &counter);
		else
			counter += ft_putchar(*fmt);
		fmt++;
	}
	va_end(ap);
	return counter;
}
