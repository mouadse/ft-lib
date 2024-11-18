#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
// ptr address
// helpful function to upper
int main(void) {
  char *ptr;
  int age;

  ptr = (char *)malloc(10);
  // The adress it points to
  printf("The address of ptr is: %p\n", ptr);
  // The address of the pointer
  printf("The address of &ptr is: %p\n", &ptr);
  // The address of the variable
  printf("The address of &age is: %p\n", &age);
  return (0);
}
