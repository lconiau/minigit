/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lconiau <lconiau@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:01:39 by lconiau           #+#    #+#             */
/*   Updated: 2024/03/23 14:09:30 by lconiau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *first, const char *second, int lenght)
{
	while (lenght--)
	{
		if (*first != *second)
			return ((unsigned char)*first - (unsigned char)*second);
		if (*first == '\0')
			break ;
		first++;
		second++;
	}
	return (0);
}

int	ft_strcmp(const char *first, const char *second)
{
	while (*first && (*first == *second))
	{
		first++;
		second++;
	}
	return (first - second);
}