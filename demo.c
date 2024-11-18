#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// helpful function to upper
char upper(char c) {
  char val = c;
  if (c >= 'a' && c <= 'z') {
    val = c - 32;
  }
  return val;
}

int main(void) {
  char const *name = "Mou@3ad";
  char *res;
  int i;
  res = malloc(strlen(name) + 1);
  if (res == NULL) {
    return (EXIT_FAILURE); // Exit status 1
  }

  i = 0;
  printf("The value of i is %d\n", i);
  while (name[i] != '\0') {
    res[i] = upper(name[i]);
    i++;
  }
  res[i] = '\0';
  printf("%s\n", res);
  return (EXIT_SUCCESS);
}
