/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:55:29 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/08 20:41:37 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = 0;
	src_size = 0;
	while (dest[dest_size] || src[src_size])
	{
		if (dest[dest_size])
			dest_size++;
		if (src[src_size])
			src_size++;
	}
	while (src[i] != '\0' && dest_size + i < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}

/* int	main() {
	char dest[8] = "Hello";
	char *src = "World";
	printf("%d\n", ft_strlcat(dest, src, 8));
	printf("%s", dest);
} */