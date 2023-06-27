#include <stdarg.h>
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
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1] == 'c' ? 1 : format[i + 1] == 's' ? 2 : 3)
			{
			case 1:/*for character sspecifier*/
				letter = (char)va_arg(holders, int);
				len += _print(letter);
				format++;
				break;
			case 2:/*checked for string specifier*/
				if (format[i + 1] != '\0')
				{
					words = va_arg(holders, char *);
					if (words == NULL)
						len += print_words("(null)");
					len += print_words(words);
					format++;
				}
				break;
			case 3:/*for double % sign*/
				len += _print('%');
				format++;
				break;
			default:
				len += _print('%');
				format++;
			}
		}
	}
	va_end(holders);/*end extraction of arguments*/
	return (len);
}
