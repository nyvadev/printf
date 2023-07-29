#include "main.h"


int handle(char format, va_list list)
{
  int i;
  int character_printed = 0;
  char c;
  const char *string;

  switch (format)
  {
  case 'c':
  {
    c = (char) va_arg(list, int);
    putchar(c);
    character_printed++;
    break;
  }
  case 's':
  {
    string = (const char *) va_arg(list, const char *);
    while (*string != '\0')
    {
      putchar(*string);
      character_printed++;
      string++;
    }
    break;
  }
  case '%':
  {
    c = '%';
    putchar(c);
    character_printed++;
    break;
  }
  case 'd':
  {
    int Number = va_arg(list, int);
    char buffer[33];

    num_to_string(Number, buffer, 10);
    for (i = 0; buffer[i]; i++)
    {
      putchar(buffer[i]);
      character_printed++;
    }
    break;
  }
  case 'i':
  {
    int Number = va_arg(list, int);
    char buffer[33];

    num_to_string(Number, buffer, 10);
    for (i = 0; buffer[i]; i++)
    {
      putchar(buffer[i]);
      character_printed++;
    }
    break;
  }
  case 'b':
  {
    int Number = va_arg(list, int);
    char buffer[33];

    num_to_string(Number, buffer, 2);
    for (i = 0; buffer[i]; i++)
    {
      putchar(buffer[i]);
      character_printed++;
    }
    break;
  }
  case 'u':
  {
    int Number = va_arg(list, int);
    char buffer[33];

    num_to_string(Number, buffer, 10);
    for (i = 0; buffer[i]; i++)
    {
      if (buffer[i] == '-')
        continue;
      putchar(buffer[i]);
      character_printed++;
    }
    break;
  }
  case 'o':
  {
    int Number = va_arg(list, int);
    char buffer[33];

    num_to_string(Number, buffer, 8);
    for (i = 0; buffer[i]; i++)
    {
      putchar(buffer[i]);
      character_printed++;
    }
    break;
  }
  case 'x':
  {
    int Number = va_arg(list, int);
    char buffer[33];

    num_to_string(Number, buffer, 16);
    for (i = 0; buffer[i]; i++)
    {
      putchar(buffer[i]);
      character_printed++;
    }
    break;
  }
  case 'X':
  {
    int Number = va_arg(list, int);
    char buffer[33];

    num_to_string(Number, buffer, 16);
    for (i = 0; buffer[i]; i++)
    {
      putchar(buffer[i]);
      character_printed++;
    }
    break;
  }
  }
  return (character_printed);
}
