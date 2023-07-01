#ifndef SWITCH
#define SWITCH

switch (format[i + 1] == 'c' ? 1 : format[i + 1] == 's' ? 2 :
	format[i + 1] == 'd' || format[i + 1] == 'i' ? 3 :
	format[i + 1] == 'b' ? 4 : format[i + 1] == 'u' ? 5 :
	format[i + 1] == 'o' ? 6 : 7)
{
case 1:/*for character sspecifier*/
	letter = (char)va_arg(holders, int);
	len += _print(letter);
	format++;
	break;
case 2:/*checked for string specifier*/
if (format[i + 1] != '\0')
{
	words = (char *)va_arg(holders, char *);
	if (words == NULL)
		len += print_words("(null)");
	len += print_words(words);
	format++;
}
break;
case 3:/*for decimal specifier*/
	decimal = va_arg(holders, int);
	len += print_number(decimal, 12, 10, -1);/*value, size and base*/
	format++;
	break;
case 4:/*for binary specifier*/
	no_sign = va_arg(holders, unsigned int);
	len += print_number(no_sign, 12, 2, -1);/*value, size and base*/
	format++;
	break;
case 5:/*for unsigned specifier*/
	no_sign = va_arg(holders, unsigned int);
	len += print_number(no_sign, 12, 10, 1);/*value, size and base*/
	format++;
	break;
case 6:/*for octal specifier*/
	no_sign = va_arg(holders, unsigned int);
	len += print_number(no_sign, 12, 8, 1);/*value, size and base*/
	format++;
	break;
case 7:/*for double % sign*/
	len += _print('%');
	format++;
	break;
default:
	len += _print('%');
	format++;
}

#endif
