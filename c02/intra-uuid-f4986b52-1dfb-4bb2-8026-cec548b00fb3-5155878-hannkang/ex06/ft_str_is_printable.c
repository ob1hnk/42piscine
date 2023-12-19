/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:49:15 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/03 19:51:15 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main() {
	char c[] = "";
	char d[] = "awfg*^2/as";
   	char e[] = "스콘";
	printf("empty: %d\n", ft_str_is_printable(c));
	printf("all printable: %d\n", ft_str_is_printable(d));
   	printf("not all printable: %d", ft_str_is_printable(e));
} */