#include "main.h"

/**
  *_abs - Checks for lowercase character
  *@c: The character to be checked
  *Return: 1 for lowercase character or 0 for anything else
  */

int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
