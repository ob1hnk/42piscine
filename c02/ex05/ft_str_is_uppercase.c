/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:35:23 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/03 19:51:36 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || 'Z' < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main() {
    	char c[] = "";
	char d[] = "ASDFJLAJFS";
    	char e[] = "asdFf";
	printf("empty: %d\n", ft_str_is_uppercase(c));
	printf("all uppercase: %d\n", ft_str_is_uppercase(d));
  	printf("not all uppercase: %d", ft_str_is_uppercase(e));
} */