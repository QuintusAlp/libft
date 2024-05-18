/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:42:04 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/20 13:53:17 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;

	memory = malloc(count * size);
	if (memory == NULL)
		return (NULL);
	ft_memset(memory, 0, count * size);
	return (memory);
}
/*
int main(void)
{
	char *str = ft_calloc(2,sizeof(int));
	printf("%c", str[0]);
}*/