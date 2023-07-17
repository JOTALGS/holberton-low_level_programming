#include <stdio.h>
#include <stdarg.h>

void
print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	if (n != 0)
	{
		if (separator)
		{
			for (i = 0; i < n; i++)
			{
				str = va_arg(args, char *);
				if(str)
				{
					printf("%s", str);
					if (i != n - 1)
						printf("%s", separator);
					else
						printf("\n");
				}
				else
					printf("(nil)");
			}
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				str = va_arg(args, char*);
				printf("%s", str);
			}
			printf("\n");
		}
	}
	else
		printf("\n");
}
