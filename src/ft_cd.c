/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lconiau <lconiau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:21:52 by lconiau           #+#    #+#             */
/*   Updated: 2024/04/20 21:22:13 by lconiau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

static void	update_env_path(t_list *env, t_list *command)
{
	char	buf[PATH_MAX];
	char	*tmp;
	char	*ptr;

	ptr = getenv(env, "PWD")->val;
	if (!ft_strcpy())
}