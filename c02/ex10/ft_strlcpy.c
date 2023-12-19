/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:44:14 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/07 20:22:43 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	i;

	src_size = 0;
	i = 0;
	while (src[src_size] != '\0')
	{
		src_size++;
	}
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}

/* int main() {
	char dest[6];
    char *src = "grapefruit";
    printf("%d, %s\n", ft_strlcpy(dest, src, sizeof(dest)), dest);
} */