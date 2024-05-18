/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:58:11 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/05/18 17:12:16 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>


char *load_string(char *argv);
char *load_items(int argc,char **argv);
int ft_printresult(char *result);
char *sort_stack(char **stack_a, char **stack_b);
int	verify_string(char *str);
//push_swap
#endif