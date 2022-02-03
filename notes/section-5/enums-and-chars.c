enum primaryColor
{
  red,
  yellow,
  blue,
};

enum primaryColor myColor, gregColor;
myColor = red;   // this is good
// myColor = green; // this is bad

enum direction
{
  up,        // = 0
  down,      // = 1
  left = 10, // = 10, not 2
  right      // = 11, not 3
};

// char data type is a single character in single quotes

char broiled;
broiled = 'T'; // good
// broiled = T;   // not good
broiled = "T"; // not good because double quotes means string (different from char)

char x = '\n'; // if you print this, it just prints a new line

// \a, \b, \f, \n, \r are all escape characters

#include <stdio.h>

int main()
{
  enum gender
  {
    male,
    female
  };

  enum gender myGender;

  myGender = male;

  // myGender = "44" // wrong because you can on ly assign male or female

  enum gender anotherGender = female;

  _Bool isMale = (myGender == anotherGender);
  
  printf(anotherGender);

  return 0;
};