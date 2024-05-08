/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lconiau <lconiau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:21:36 by lconiau           #+#    #+#             */
/*   Updated: 2024/05/08 14:20:25 by lconiau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	ft_pwd(t_cmd *cmd)
{
	char	buff[PATH_MAX];

	(void)cmd;
	if (!(m_shell.cwd = getcwd(buff, PATH_MAX)))
		ft_putendl_fd((getenv(m_shell.cwd, "PWD"))->val, STDOUT_FILENO);
	else
		ft_putendl_fd(m_shell.cwd, STDOUT_FILENO);
	return (SUCCESS);
}
