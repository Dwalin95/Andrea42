/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acheloni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:08:46 by acheloni          #+#    #+#             */
/*   Updated: 2021/10/04 12:44:30 by acheloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_reverse_print_alphabet(void)
{
	char c;
	c = 'z';
		while (c >= 'a')
		{
			write (1, &c, 1);
				c--;
		}
}