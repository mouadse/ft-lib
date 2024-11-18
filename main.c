#include "libft.h"
#include <stdio.h>

int main(void) {
  char *set = "@#$";
  char *s1 = "###hello@#$";

  printf("The result is: %s\n", s1);
  char *res = ft_strtrim(s1, set);
  printf("The result is: %s\n", res);
  return (0);
}
