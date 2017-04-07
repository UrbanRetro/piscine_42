/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperodea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:15:37 by tperodea          #+#    #+#             */
/*   Updated: 2017/03/15 10:37:57 by tperodea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_digit(char c)
{
	int		is_digit;

	is_digit = 1;
	if (c > 47 && c < 58)
		is_digit = 1;
	else
		is_digit = 0;
	return (is_digit);
}

int		ft_result(char *str, int i)
{
	int		result;

	result = 0;
	while (str[i])
	{
		if (ft_is_digit(str[i]) == 1)
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
		else
			break ;
	}
	return (result);
}

int		ft_atoi(char *str)
{
	int		result;
	int		i;
	int		sign;

	sign = 1;
	result = 0;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i] == 32)
		i++;
	result = ft_result(str, i);
	return (sign * result);
}
