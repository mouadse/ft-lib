/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msennane <msennane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:49:01 by msennane          #+#    #+#             */
/*   Updated: 2024/11/18 02:02:26 by msennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strdup(const char *s1) {
  char *res;
  size_t i;
  size_t len;

  len = strlen(s1);
  res = (char *)malloc(sizeof(char) * (len + 1));
  if (!res) // Not res
    return (NULL);
  i = 0;
  while (i < len) {
    res[i] = s1[i];
    i++;
  }
  res[i] = '\0'; // close the string
  return (res);
}
