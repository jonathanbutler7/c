#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h> // for random number generator seed
// int main()
// {
//   int numberOfTries = 5;
//   int answer = 6;
//   int guess;
//   do
//   {
//     printf("Guess my number. It's between 1 and 20.\n");
//     scanf("%d", &guess);
//     if (guess < answer)
//     {
//       numberOfTries = numberOfTries - 1;
//       printf("You guessed %d, but that's too low.\nYou have %d tries left\n", guess, numberOfTries);
//     }
//     if (guess > answer)
//     {
//       numberOfTries = numberOfTries - 1;
//       printf("You guessed %d, but that's too high.\nYou have %d tries left\n", guess, numberOfTries);
//     }
//   } while (guess != answer && numberOfTries > 0);
//   if (guess == answer)
//   {
//     printf("Final guess: %d\nActual number:%d\nYou guessed it!\n", guess, answer);
//   }
//   else if (guess != answer)
//     printf("No dice.\n");

//   return 0;
// }

int main()
{
  int randomNumber = 0;
  int guess = 0;
  int guesses;
  time_t t;
  srand((unsigned)time(&t));
  randomNumber = rand() % 21;

  printf("This is a guessing game.\n");
  printf("Guess a number between 0 and 20.\n");

  for (guesses = 5; guesses > 0; guesses--)
  {
    printf("\nYou have %d tr%s left.\n", guesses, guesses == 1 ? "y" : "ies");
    printf("\nEnter a guess: ");
    scanf("%d", &guess);

    if (guess == randomNumber)
    {
      printf("\nCorrect, number was %d.\n", randomNumber);
      break;
    }
    else if (guess < 0 || guess > 20)
      printf("\nGuess outside of range.");
    else if (randomNumber > guess)
      printf("My number is bigger.");
    else if (randomNumber < guess)
      printf("My number is smaller.");
  }
  if (guess != randomNumber)
    printf("You failed, number was %d\n", randomNumber);

  return 0;
}