/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lconiau <lconiau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:21:42 by lconiau           #+#    #+#             */
/*   Updated: 2024/04/20 21:21:44 by lconiau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

static void	echo_newline(t_list *lst)
{
	while (lst)
	{
		ft_putstr_fd(((t_token *)lst->content)->elem, 1);
		if ((lst = lst->next) != 0)
			ft_putchar_fd(' ', 1);
	}
	ft_putendl_fd("", 1);
}

int	ft_echo(t_list *cmd)
{
	t_list *tmp;
	int		newline;

	newline = 1;
	tmp = command->next;
	if (!((t_token *)tmp))
		ft_putendl_fd("", 1);
	while (tmp && !(ft_strncmp(((t_token *)tmp->content)->elem, "-n", 3)))
	{
		newline = 0;
		tmp = tmp->next;
	}
	if (!newline)
	{
		while (tmp)
		{
			ft_putstr_fd(((t_token *)tmp->content)->elem, 1);
			if ((tmp = tmp->next) != 0)
				ft_putchar_fd(' ', 1);
		}
	}
	else if (tmp)
		echo_newline(tmp);
	return (SUCCESS);
}
