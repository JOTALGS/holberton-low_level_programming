#include <stdio.h>
#include <stdarg.h>

void
print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n != 0)
	{
		if (separator)
		{
			for (i = 0; i < n; i++)
			{
				printf("%d", va_arg(args, int));
				if (i != n - 1)
					printf("%s", separator);
				else
					printf("\n");
			}
		}
		else
		{
			for (i = 0; i < n; i++)
				printf("%d", va_arg(args, int));
			printf("\n");
		}
	}
}
