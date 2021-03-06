/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperodea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 21:55:02 by tperodea          #+#    #+#             */
/*   Updated: 2017/03/12 18:10:54 by tperodea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_end(void)
{
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 0;
	while (a <= 6)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				ft_comma();
				c++;
			}
			b++;
		}
		a++;
	}
	ft_end();
}
