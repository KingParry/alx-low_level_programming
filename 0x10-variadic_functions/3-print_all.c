
#include "variadic_functions.h"

/**
 *  print_all - main function
 *  @format: arguments
 *  Return: void
 */

void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0, commaCheck = 0;
	va_list x;

	va_start(x, format);

	while (format && format[i])
	{
		if (commaCheck)
			printf(", ");

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(x, int));
			break;
		case 'i':
			printf("%i", va_arg(x, int));
			break;
		case 'f':
			printf("%f", va_arg(x, double));
			break;
		case 's':
			str = va_arg(x, char*);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			commaCheck = 0;
			i++;
			continue;
		}
		commaCheck = 1,	i++;
	}
	putchar('\n');
	va_end(x);
}
