/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:35:35 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/13 13:35:38 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_octets(long n)
{
	int	o;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		o = 1;
		n *= -1;
	}
	else
		o = 0;
	while (n)
	{
		n /= 10;
		o++;
	}
	return (o);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	int			i;

	nbr = n;
	str = malloc((ft_octets(nbr) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[ft_octets(nbr)] = '\0';
	i = ft_octets(nbr) - 1;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		str[i] = (nbr % 10) + '0';
	while (nbr)
	{
		str[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (str);
}
/*
int main(void)
{
	char *str = ft_itoa(0);
	int i = 0;
	while(i < 20)
	{
		printf("%c", *str);
		str++;
		i++;
	}
	return 0;
}*/
