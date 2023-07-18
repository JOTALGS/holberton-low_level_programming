#include <stdarg.h>
#include <stdio.h>

void
print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i + 1])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c, ", va_arg(args, int));
					break;
				case 'i':
					printf("%i, ", va_arg(args, int));
					break;
				case 'f':
					printf("%f, ", va_arg(args, double));
					break;
				case 's':
					printf("%s, ", va_arg(args, char *));
			}
		}
		if (!format[i + 1])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%i", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					printf("%s", va_arg(args, char *));
			}
		}
		i++;
	}
	printf("\n");
}
