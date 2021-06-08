/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbray <jbray@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 09:39:56 by jbray             #+#    #+#             */
/*   Updated: 2021/06/01 09:39:56 by jbray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*scpy;

	if (ft_strlen(s) < start)
	{
		if (!(scpy = malloc(sizeof(char))))
			return (NULL);
		*scpy = '\0';
		return (scpy);
	}
	else if (s)
	{
		return (ft_strndup(&s[start], len));
	}
	else
		return (NULL);
}