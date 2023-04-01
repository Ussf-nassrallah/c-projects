#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char questions[][100] = {
      "1 - What year did the C language debut ? : ",
      "2 - Who is Credited with creating C ? : ",
      "3 - What is the predecessor of C ? : "};

  char options[][100] = {
      "A. 1969", "B. 1972", "C. 1975", "D. 1999",
      "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
      "A. Objective C", "B. B", "C. C++", "D. C#"};

  char answers[3] = {'B', 'A', 'B'};

  int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

  char guess;
  int score;

  printf("QUIZ GAME\n");

  int i, j;
  for (i = 0; i < numberOfQuestions; i++)
  {
    printf("######################## Question %d ########################\n", i + 1);
    printf("%s\n", questions[i]);
    printf("#############################################################\n", i + 1);

    for (j = (i * 4); j < (i * 4) + 4; j++)
    {
      printf("%s\n", options[j]);
    }

    printf("Guess : ");
    scanf("%c", &guess);
    scanf("%*c"); // clear \n from input buffer

    guess = toupper(guess);

    if (guess == answers[i])
    {
      printf("CORRECT!\n");
      score++;
    }
    else
    {
      printf("WRONG!\n");
    }
  }

  printf("FINAL SCORE : %d/%d\n", score, numberOfQuestions);

  return (0);
}