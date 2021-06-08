/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbray <jbray@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 09:43:51 by jbray             #+#    #+#             */
/*   Updated: 2021/06/01 09:43:51 by jbray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		len;

	s1 = (char *)s;
	len = ft_strlen(s);
	if (c == '\0')
		return (&s1[len]);
	while (len >= 0)
	{
		if (s1[len] == c)
			return (&s1[len]);
		len--;
	}
	return (0);
}