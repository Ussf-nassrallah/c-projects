#include <stdio.h>
#include <string.h>

/**
 * hello_user - function that takes a name from the user and print heyy to hem
 * @name: represent the name of user
 * Return: ...
*/
void hello_user(void);

int main(void)
{
  hello_user();
  return (0);
}

void hello_user(void)
{
  char name[30];
  printf("Hello There, Enter Your Name : ");
  scanf("%s", name);
  printf("Hello %s, welcome to the party", name);
}