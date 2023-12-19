/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:03:48 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/03 19:53:17 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || 'z' < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main() {
    char c[] = "";
	char d[] = "asdfjlk";
    char e[] = "asdFf";
	printf("empty: %d\n", ft_str_is_lowercase(c));
	printf("all lowercase: %d\n", ft_str_is_lowercase(d));
    printf("not all lowercase: %d", ft_str_is_lowercase(e));
} */