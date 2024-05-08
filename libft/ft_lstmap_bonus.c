/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lconiau <lconiau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:01:31 by lconiau           #+#    #+#             */
/*   Updated: 2024/04/20 16:25:05 by lconiau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static t_list	*create_new_element(void *content, void *(*f)(void *) \
	, void (*del)(void *))
{
	void		*new_content;
	t_list	*new_element;

	new_content = f(content);
	if (!new_content)
		return (NULL);
	new_element = ft_lstnew(new_content);
	if (!new_element)
	{
		del(new_content);
		return (NULL);
	}
	return (new_element);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new_list;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new_list = 0;
	while (lst)
	{
		temp = create_new_element(lst->content, f, del);
		if (!temp)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, temp);
		lst = lst->next;
	}
	return (new_list);
}
