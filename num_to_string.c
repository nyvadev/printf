#include "main.h"

/**
 * *num_to_string - convert number to string
 * @value: the vlue of the number
 * @*buffer; contains the number of characters to return
 *
 * Return: reverse buffer
 */


void swap(char *x, char *y)
{
  char t = *x; *x = *y; *y = t;
}


char *reverse(char *buffer, int i, int j)
{
  while (i < j)
    swap(&buffer[i++], &buffer[j--]);

  return (buffer);
}


char *num_to_string(int value, char *buffer, int base)
{
  int n = abs(value);

  int i = 0;
  while (n)
  {
    int r = n % base;
    if (r >= 10)
    {
      buffer[i++] = 65 + (r - 10);
    }
    else
    {
      buffer[i++] = 48 + r;
    }
    n = n / base;
  }
  if (i == 0)
  {
    buffer[i++] = '0';
  }
  if (value < 0 && base == 10)
  {
    buffer[i++] = '-';
  }
  buffer[i] = '\0';

  return (reverse(buffer, 0, i - 1));
}
