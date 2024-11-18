#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

#define NAME "Mouad Sennane"
#define PI 3.14159265359

typedef struct s_node {
  int value;
  struct s_node *next;
} t_node;

typedef struct s_list {
  t_node *front;
  t_node *rear;
  int size;
} s_list;

// Function prototypes
void calculate(int num1, int num2);

#endif
