enum primaryColor
{
  red,
  yellow,
  blue,
};

enum primaryColor myColor, gregColor;
myColor = red;   // this is good
myColor = green; // this is bad

enum direction
{
  up,        // = 0
  down,      // = 1
  left = 10, // = 10, not 2
  right      // = 11, not 3
};

