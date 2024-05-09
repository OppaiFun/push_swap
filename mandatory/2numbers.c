/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2numbers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 23:56:17 by madamou           #+#    #+#             */
/*   Updated: 2024/05/02 21:28:50 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_stack	*ft_if_2_numbers(t_stack *stack_a)
{
	t_stack	*tmp;
	int		buff;

	tmp = stack_a;
	buff = stack_a->nb;
	stack_a = stack_a->next;
	if (buff > stack_a->nb)
	{
		stack_a = ft_swap_a(tmp);
		return (stack_a);
	}
	return (tmp);
}