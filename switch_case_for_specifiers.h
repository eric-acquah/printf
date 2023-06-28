#ifndef SWITCH
#define SWITCH

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
					words = (char *)va_arg(holders, char *);
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

#endif