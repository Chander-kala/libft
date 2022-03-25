/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:34:38 by ckala             #+#    #+#             */
/*   Updated: 2022/03/25 16:59:15 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//To find the first occurrence of a character ch in a string st.//

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
//The functions strchr() return a
// pointer to the located character, or NULL if the
//character does not appear in the string.//
