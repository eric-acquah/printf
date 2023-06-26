#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 *_printf - Print formatted output to stdout
 *@format: format string
 *Return: Number of bytes written
 */

int _printf(char *format, ...)
{
	va_list holders;
	char letter;
	char *words;
	int i;
	int len = 0;/*Keep count of number of bytes written*/

	va_start(holders, format); /*Initailize varaible list*/

	for (i = 0; format[i] != '\0'; i++)/*loop over the format string*/
	{
		/*Check for character specifier values*/
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			letter = (char)va_arg(holders, int);
			len += _print(letter);
			format++;
			format++;
		}
		/*Checking for percentage sign to avoid confusion*/
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			len += _print('%');
			format++;
			format++;
		}
		/*Check for string specifiers*/
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			words = (char *)va_arg(holders, int *);
			len += print_words(words);
			format++;
			format++;
		}

		len += _print(format[i]);/*if no specifier found just print out*/
	}
	va_end(holders);
	return (len);
}

/**
 *_print - print to standard output
 *@letter: character to be printed
 *Return: number of bytes written to stdout
 */

int _print(char letter)
{
	return (write(1, &letter, 1));
}


/**
 *print_words - print strings
 *@word: string pointer
 *Return: lenght of string
 */

int print_words(char *word)
{
	int counter;

	for (counter = 0; word[counter] != '\0'; counter++)
	{
		_print(word[counter]);
	}

	return (counter);
}
