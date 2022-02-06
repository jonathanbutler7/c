#include <stdio.h>
int main()
{
  enum Company
  {
    FACEBOOK,
    XEROX,
    YAHOO,
    GOOGLE,
    EBAY,
    MICROSOFT
  };

  enum Company xerox = XEROX;
  enum Company google = GOOGLE;
  enum Company ebay = EBAY;
  
  printf("My company %d", google);
  
  return 0;
};
