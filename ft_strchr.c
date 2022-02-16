/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:34:38 by ckala             #+#    #+#             */
/*   Updated: 2022/02/15 17:55:54 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
				return ((char *)s);
				s++;
	}
				if (c == 0)
				return ((char *)s);
				return (NULL);
}
#include <stdio.h>
#include <string.h>
int main () {
   const char str[] = "This is just a String";
   const char ch = 'u';
   char *p;
   p = strchr(str, ch);
   printf("String starting from %c is: %s", ch, p);
   return 0;
}
