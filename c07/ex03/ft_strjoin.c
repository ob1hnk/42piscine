/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:09:29 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/14 17:55:34 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  • Write a function that will concatenate all the strings pointed by strs separated by
        sep.
    • size is the number of strings in strs
    • if size is 0, you must return an empty string that you can free() */


#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_size;
	unsigned int	i;

	dest_size = 0;
	i = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *temp;
	
	temp = (char *)malloc(size * sizeof(char));
	
	
}

#include <stdio.h>

int	main()
{
	char *strs[3]
	strs[0] = "asdfgw";
	strs[1] = "gwijh";
	strs[2] = "owa";
	strs[3] = "-92ha";
	printf("%s", ft_strjoin(4, strs, ", "));
	printf("%lu", sizeof(char));
}