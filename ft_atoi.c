/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:25:14 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/15 20:22:59 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	is_neg;
	int	res;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		is_neg = -1;
	else
		is_neg = 1;
	if (is_neg == -1 || str[i] == '+')
		i++;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i++] - '0');
		if (sizeof(res) >= sizeof(long long))
			return (-1);
	}
	return (res * is_neg);
}
/*
#include <stdio.h>
int	main(void)
{
	
	
	char str[] = "	\n /100000000000000008000";
	ft_atoi((void*)0);
	
	if(ft_atoi(str) == atoi(str))
		printf("ok \n");
	else
		printf("%d != %d \n", ft_atoi(str), atoi(str));

}*/