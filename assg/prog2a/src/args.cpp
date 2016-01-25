#include "args.h"
#include <cctype>

/**
 * Tell if character array represents integer.
 * @param a  character array
 */
bool is_integer(char *a) {
  int i=0;
  while (a[i] != '\0') {
    if (!isdigit(a[i]))
      return false;
    i++;
  }
  return true;  
}

