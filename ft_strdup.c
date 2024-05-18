/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:15:12 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/16 13:37:01 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*coppy;
	int		i;

	
	coppy = malloc((ft_strlen((char *)s1) + 1) * sizeof(char));
	if (!coppy)
		return (0);
	i = 0;
	while (s1[i])
	{
		coppy[i] = s1[i];
		i++;
	}
	coppy[i] = '\0';
	return (coppy);	
}
/*
#include <stdio.h>
int main(void)
{
	
	printf("%s", ft_strdup(NULL));
}*/