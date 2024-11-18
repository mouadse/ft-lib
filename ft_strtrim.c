/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msennane <msennane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 02:55:18 by msennane          #+#    #+#             */
/*   Updated: 2024/11/18 03:02:28 by msennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static char *ft_strchr(const char *s, int c) {
  if (!s)
    return (NULL);
  while (*s) {
    if (*s == c)
      return ((char *)s);
    s++;
  }
  return (NULL);
}

// Set = "@#$"   s1 = "###hello@#$"
int find_start(char const *s1, char const *set) {
  int i;

  i = 0;
  while (s1[i] && ft_strchr(set, s1[i]))
    i++;
  return (i);
}

int find_end(char const *s1, char const *set) {
  int i;

  i = strlen(s1) - 1; // Minus 1 because the index starts from 0
  while (i >= 0 && ft_strchr(set, s1[i]))
    i--;
  return (i);
}

char *ft_strtrim(char const *s1, char const *set) {
  if (!s1 || !set)
    return (NULL);
  size_t start;
  size_t end;
  char *res;
  start = find_start(s1, set);
  end = find_end(s1, set);
  if (start > end)
    return (strdup("")); // return an empty string that can be freed
  res = (char *)malloc(sizeof(char) *
                       (end - start + 2)); // +2 for the null terminator
  if (!res)
    return (NULL);
  memcpy(res, &s1[start], end - start + 1);
  return (res);
}
