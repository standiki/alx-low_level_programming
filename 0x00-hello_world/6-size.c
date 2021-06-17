#include <stdio.h>

/**
 *main - prints the size of various types 
 *Return: 0
 */

int main(void)
{
  printf("Size of a char: %1u byte(s)\n", sizeof(char));
  printf("Size of an int: %1u byte(s)\n", sizeof(int));
  print("Size of a long int: %1u byte(s)\n", sizeof(long));
  print("Size of a long long int: %1u byte(s)\n", sizeof(long long));
  print("Size of a float: %1u byte(s)\n", sizeof(float));
  return(0);
}
