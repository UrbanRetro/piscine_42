/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperodea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 13:25:42 by tperodea          #+#    #+#             */
/*   Updated: 2017/03/12 18:22:47 by tperodea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_end(void)
{
	ft_putchar('9');
	ft_putchar('8');
	ft_putchar(' ');
	ft_putchar('9');
	ft_putchar('9');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 97)
	{
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putchar((a / 10) + '0');
				ft_putchar((a % 10) + '0');
				ft_putchar(' ');
				ft_putchar((b / 10) + '0');
				ft_putchar((b % 10) + '0');
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	ft_end();
}
