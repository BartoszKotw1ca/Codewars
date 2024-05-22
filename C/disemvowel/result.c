#include <stdlib.h>

//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{
  char *res;
  int i = 0;
  int len = 0;
	while (str[i])
  {
    if (str[i] == 'a'
        || str[i] == 'e'
        || str[i] == 'i'
        || str[i] == 'o'
        || str[i] == 'u'
        || str[i] == 'A'
        || str[i] == 'E'
        || str[i] == 'I'
        || str[i] == 'O'
        || str[i] == 'U')
      i ++;
    else
    {
      i ++;
      len ++;
    }
  }
  res = malloc(sizeof(char) * (len  + 1));
  if (!res)
    return (0);
  i = 0;
  len = 0;
  while (str[i])
  {
    if (str[i] == 'a'
        || str[i] == 'e'
        || str[i] == 'i'
        || str[i] == 'o'
        || str[i] == 'u'
        || str[i] == 'A'
        || str[i] == 'E'
        || str[i] == 'I'
        || str[i] == 'O'
        || str[i] == 'U')
      i ++;
    else
    {
      res[len] = str[i];
      len ++;
      i ++;
    }
  }
  res[len] = '\0';
  return res;
}
