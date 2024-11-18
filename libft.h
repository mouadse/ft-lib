/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msennane <msennane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:25:03 by msennane          #+#    #+#             */
/*   Updated: 2024/11/18 01:25:45 by msennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

# define NAME "Mouad Sennane"
# define PI 3.14159265359

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_list
{
	t_node			*front;
	t_node			*rear;
	int				size;
}					t_list;

void				calculate(int num1, int num2);

#endif
