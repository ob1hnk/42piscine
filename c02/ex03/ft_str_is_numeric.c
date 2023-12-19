/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:59:20 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/03 19:52:53 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || '9' < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main() {
    char c[] = "";
	char d[] = "123";
    char e[] = "asdf1234";
	printf("empty: %d\n", ft_str_is_numeric(c));
	printf("all numeric: %d\n", ft_str_is_numeric(d));
    printf("not all numeric: %d", ft_str_is_numeric(e));
} */