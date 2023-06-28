#include "main.h"
/**
 *_printf - Print formatted output to stdout
 *@format: format string
 *Return: Number of bytes written
 */
int _printf(const char *format, ...)
{

#include "declearation_holders.h"

	va_start(holders, format); /*Initailize varaible list*/
	for (i = 0; format[i] != '\0'; i++)/*loop over the format string*/
	{
		if (format[i] != '%')
			len += _print(format[i]);
		if (format[i] == '%' && format[i + 1] != '\0')
		{
#include "switch_case_for_specifiers.h"
		}
	}
	va_end(holders);/*end extraction of arguments*/
	return (len);
}
