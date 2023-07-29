#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: string to print
 *
 * Return: number of characters printed
 */


int _printf(const char *format, ...)
{
	va_list list;
	int character_printed = 0;
	char current_char;
	int printed;


	if (format == NULL)
		return (-1);

	va_start(list, format);
	while ((current_char = *format) != '\0')
	{
		format++;
		if (current_char == '\\' && *format == '%')
		{
			putchar('%');
			character_printed++;
			format++;
			continue;
		}
		if (current_char != '%')
		{
			putchar(current_char);
			character_printed++;
			continue;
		}
		else
		{
			printed = handle(*format, list);
			character_printed += printed;
			format++;
		}
	}
	va_end(list);
	return (character_printed);
}
