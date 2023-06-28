#ifndef SWITCH
#define SWITCH

switch (format[i + 1] == 'c' ? 1 : format[i + 1] == 's' ? 2 :
<<<<<<< HEAD
	format[i + 1] == 'd' || format[i + 1] == 'i' ? 3 : 4)
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
			case 3:/*for decimal sspecifier*/
				decimal = va_arg(holders, int);
				len += print_number(decimal);
				format++;
				break;
			case 4:/*for double % sign*/
				len += _print('%');
				format++;
				break;
			default:
				len += _print('%');
				format++;
			}
=======
        format[i + 1] == 'd' || format[i + 1] == 'i' ? 3 : 4)
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
                                len += print_number(decimal);
                                format++;
                                break;
                        case 4:/*for double % sign*/
                                len += _print('%');
                                format++;
                                break;
                        default:
                                len += _print('%');
                                format++;
                        }
>>>>>>> 6304504bebc1f7eeac211824bfb73d0c5df0c032

#endif
