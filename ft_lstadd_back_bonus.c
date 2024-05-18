/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:28:14 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/15 15:36:53 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if ((*lst) == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

// void ft_printlst(t_list **lst)
// {
// 	t_list *tmp = *lst;
// 	while(tmp != NULL) 
// 	{
// 		printf("%s ", (char*)tmp->content); 
// 		tmp = tmp->next; 
// 	}
// }
// int	main(void)
// {
// 	t_list *element_3 = ft_lstnew("c");
// 	t_list *element_2 = ft_lstnew("b");
// 	element_2->next = element_3;
// 	t_list *element_1 = ft_lstnew("a");
// 	element_1->next = element_2;
// 	t_list **list = NULL;
// 	ft_lstadd_back(list, ft_lstnew("z"));
// 	//ft_printlst(list);
// }