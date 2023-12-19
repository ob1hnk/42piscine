/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:46:46 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/04 00:13:52 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	i;

	dest_size = 0;
	i = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

/* int	main() {
	char dest[20] = "hello";
	printf("%s", ft_strcat(dest, "world"));
} */