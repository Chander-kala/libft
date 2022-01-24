/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:04:26 by ckala             #+#    #+#             */
/*   Updated: 2022/01/24 17:21:36 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

char	ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] != 0)
	{
		s1[i] = s2[i];
		i++;
	}
	s[i] = 0;
	return (s1);
}

int	main(void)
{
	char array1[] = "hello";
	char array2[] = "books";
	printf("%s\n",strcpy(array1,array2));
	return(0);
}
