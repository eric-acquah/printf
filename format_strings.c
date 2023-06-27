#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 *_printf - Print formatted output to stdout
 *@format: format string
 *Return: Number of bytes written
 */

int _printf(const char *format, ...)
{
	va_list holders;
	char letter;
	char *words;
	int i, len = 0;/*Keep count of number of bytes written*/

	va_start(holders, format); /*Initailize varaible list*/
	for (i = 0; format[i] != '\0'; i++)/*loop over the format string*/
	{
		if (format[i] != '%')/*If not a specifier print out*/
			len += _print(format[i]);

		if (format[i] == '%' && format[i + 1] == 'c' && format[i + 1] != '\0')
		{
			letter = (char)va_arg(holders, int);/*extract then typecast*/
			len += _print(letter);
			format++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			if (format[i + 1] != '\0')/*make sure value is no null*/
			{
				words = (char *)va_arg(holders, int *);
				len += print_words(words);
				format++;
			}
		}
		if (format[i] == '%' && format[i + 1] == '%')/*If % is 2 print only 1*/
		{
			len += _print('%');
			format++;
		}
		if (format[i] == '%' && format[i + 1] != 'c' && format[i + 1] != 's'
		    && format[i + 1] != '%')
		{
			len += _print('%');/*If the % is just a character print it*/
			format++;
		}
	}
	va_end(holders);/*end extraction of arguments*/
	return (len);
}
