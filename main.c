#include "libft.h"
#include <stdio.h>

int main(void) {
  // code goes here
  char name[4];
  name[0] = 'J';
  name[1] = 'o';
  name[2] = 'h';
  name[3] = 'n';
  name[4] = '\0'; // This place in memory region is not allocated for the name array
  printf("My name is: %s\n", name);
  return (0);
}
