#include <ctype.h>
#include "stdstring.h"

char *string_to_upper(char *s)
{
    char *cs = (char *)s;
    for (; *cs != '\0'; cs++) {
        *cs = toupper(*cs);
    }
    return s;
}

char *string_to_lower(char *s)
{
    char *cs = (char *)s;
    for (; *cs != '\0'; cs++) {
        *cs = tolower(*cs);
    }
    return s;
}

char *string_ucwords(char *s)
{
   char *cs = (char *)s;
   for ( ; *cs != '\0'; cs++)
   {
      if (*cs == ' ')
         *(cs+1) = toupper(*(cs+1));
   }

   s[0] = toupper(s[0]);
   return s;
}