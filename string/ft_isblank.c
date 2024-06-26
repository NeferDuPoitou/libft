/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achatzit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:35:24 by achatzit          #+#    #+#             */
/*   Updated: 2024/05/21 13:35:24 by achatzit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	is_blank(char c)
{
	return (c == 32 || c == '\t');
}

int	has_blank(char *s)
{
	while (*s)
	{
		if (*s == 32 || *s == '\t')
			return (*s);
		s++;
	}
	return (0);
}
