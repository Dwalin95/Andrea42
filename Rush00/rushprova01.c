/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushprova01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acheloni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:51:18 by acheloni          #+#    #+#             */
/*   Updated: 2021/10/02 17:15:55 by acheloni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int n ;
int m ;
n = 2;
void ft_putchar(char a)
{
	write (1, &a, 1);
}

void rush01(int x, int y)
{
	if (x > 0)
		ft_putchar('/');
			if (x > 1)
			{
				while ( n++ < x)
				{	
					ft_putchar('*');
				}
			ft_putchar('\\');
			}
	if (y > 1)
		{
			ft_putchar('\n');
			ft_putchar ('*');
		}
			n = 2;
				while(n++ < x)
				ft_putchar(' ');
			ft_putchar('*');
			ft_putchar('\n');
	if (y > 1)
	{
		ft_putchar('\\');
		while (n++ < x)
			ft_putchar('*');
	}
	ft_putchar('/');

}

int	main(void)
{
	rush01(5, 5);
	return (0);
}
