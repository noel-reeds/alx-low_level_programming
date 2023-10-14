#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_all - prints anything.
  *
  *@format: format of types to be printed.
  *
  */
void print_all(const char * const format, ...)
{
	char ch, *str;
	int num, index = 0, len = strlen(format);
	float num2;
	va_list args;

	va_start(args, format);
	while (index < len)
	{
		switch (format[index])
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%c", ch);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				num2 = va_arg(args, double);
				printf("%f", num2);
				break;
			case 's':
				str =  va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				break;
		}
		if ((index < len - 1) && (format[index] == 'c' || format[index] == 'i' ||
					format[index] == 'f' || format[index] == 's'))
		printf(", ");
		index++;
	} va_end(args);
	printf("\n");
}
