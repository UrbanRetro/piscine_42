/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperodea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:16:30 by tperodea          #+#    #+#             */
/*   Updated: 2017/03/15 10:40:19 by tperodea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int		main()
{
	printf("%d\n", atoi("-56 48"));
	printf("%d\n", ft_atoi("-56 48"));
	
	printf("%d\n", atoi("-56 test"));
	printf("%d\n", ft_atoi("-56 test"));
	printf("%d\n", atoi("  756"));
	printf("%d\n", ft_atoi("  756"));
	
	
	
	
}
