/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acheloni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:38:02 by acheloni          #+#    #+#             */
/*   Updated: 2021/10/05 11:30:27 by acheloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7 && b <= 8 && c <= 9)
	{
		if (a != b && b != c && a != c)
		{
			ft_putchar(a);
			ft_putchar(b);	
			ft_putchar(c);
			c++;
		}
		b++;
	}
	a++;
}

int	main(void)
{
	ft_print_comb();
}
