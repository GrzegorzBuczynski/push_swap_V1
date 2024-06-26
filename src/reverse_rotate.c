/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:25:26 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/06/01 19:16:49 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*reverse_rotate_node;

	if (!*stack || !(*stack)->next)
		return ;
	reverse_rotate_node = find_last(*stack);
	reverse_rotate_node->prev->next = NULL;
	reverse_rotate_node->next = *stack;
	reverse_rotate_node->prev = NULL;
	*stack = reverse_rotate_node;
	reverse_rotate_node->next->prev = reverse_rotate_node;
}

void	rra(t_stack_node **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack_node **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
