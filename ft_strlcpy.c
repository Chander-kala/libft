/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:04:26 by ckala             #+#    #+#             */
/*   Updated: 2022/01/28 15:30:46 by ckala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
	{
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
