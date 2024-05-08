/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lconiau <lconiau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 08:15:03 by lconiau           #+#    #+#             */
/*   Updated: 2024/04/20 16:25:09 by lconiau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_listlib *)malloc(sizeof(t_listlib));
	if (!tmp)
		return (NULL);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}
