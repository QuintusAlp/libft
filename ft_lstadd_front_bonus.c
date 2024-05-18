/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:28:14 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/15 14:27:38 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
void ft_printlst(t_list **lst)
{
	t_list *tmp = *lst;
	while(tmp != NULL) 
	{
		printf("%s ", (char*)tmp->content); 
		tmp = tmp->next; 
	} 
}
int	main(void)
{
	t_list *element_3 = ft_lstnew("c");
	t_list *element_2 = ft_lstnew("b");
	element_2->next = element_3;
	t_list *element_1 = ft_lstnew("a");
	element_1->next = element_2;
	ft_lstadd_front(&element_1, ft_lstnew("z"));
	ft_printlst(&element_1);
}*/