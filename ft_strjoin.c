/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 09:51:31 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/16 10:55:58 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		size_s1;
	int		size_s2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = 0;
	while (s1[size_s1])
		size_s1++;
	size_s2 = 0;
	while (s2[size_s2])
		size_s2++;
	new_str = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (new_str == NULL)
		return (NULL);
	i = -1;
	while (++i, i < size_s1)
		new_str[i] = s1[i];
	i--;
	while (++i, i < size_s1 + size_s2)
		new_str[i] = s2[i - size_s1];
	new_str[i] = '\0';
	return (new_str);
}

/*
int main(void)
{
    printf("%s", ft_strjoin("hello", "\nvadkakdakdvakdvkavdkadvkadvkavdk"));
    return 0;
}*/
