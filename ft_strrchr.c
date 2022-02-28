/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:24:22 by ckala             #+#    #+#             */
/*   Updated: 2022/02/28 15:24:00 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//strrchr() used to find a last  occurrence of a character in a string.//

char	*ft_strrchr(const char *s, int c)

{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char )c)
			break ;
		i--;
	}
	if (i < 0)
		return (NULL);
	else
		return ((char *) s + i);
}
