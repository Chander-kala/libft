/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:34:38 by ckala             #+#    #+#             */
/*   Updated: 2022/02/28 15:14:05 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//To find the first occurrence of a character ch in a string st.//

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)s + i);
}
//The functions strchr() return a
// pointer to the located character, or NULL if the
//character does not appear in the string.//
