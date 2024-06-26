/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 01:16:42 by lconiau           #+#    #+#             */
/*   Updated: 2024/05/08 11:13:41 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*temp;
	size_t	lensrc;

	lensrc = ft_strlen((char *)src) + 1;
	temp = malloc(lensrc * sizeof(char));
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, src, lensrc);
	return (temp);
}

char	*ft_strndup(const char *src, size_t size)
{
	char	*temp;

	temp = malloc(size * sizeof(char));
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, src, size);
	return (temp);
}
