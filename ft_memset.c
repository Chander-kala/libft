/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:42:18 by ckala             #+#    #+#             */
/*   Updated: 2022/02/09 13:55:03 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	unsigned char *d;
	i = 0;
	d = (unsigned char *)b;
	while (i < len)
	{
		d[i] = c;
		i++;
	}
	b = d;
	return (b);
}

int	main (void)
{
	char str[50] = "chander";
	printf("%s\n",str);
	ft_memset(str, 'g', 5 * sizeof(char));
	printf("%s\n",str);
	return (0);
}
