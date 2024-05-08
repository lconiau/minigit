/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lconiau <lconiau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:59:46 by lconiau           #+#    #+#             */
/*   Updated: 2024/04/20 16:24:48 by lconiau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!lst || (!f))
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
