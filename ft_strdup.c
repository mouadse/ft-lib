/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msennane <msennane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:49:01 by msennane          #+#    #+#             */
/*   Updated: 2024/11/18 02:00:09 by msennane         ###   ########.fr       */
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
  if(!res)
	return (NULL);
  i = 0;
  

  return (res);
}
