/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:26:49 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/13 16:29:59 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char *ft_strdup(char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(src);
	char *dup;
	dup = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char *original = "Hello, world!";
	char *duplicate = ft_strdup(original);

	if (duplicate != NULL) {
        	printf("Original: %s\n", original);
        	printf("Duplicate: %s\n", duplicate);
	}

	return 0;
}