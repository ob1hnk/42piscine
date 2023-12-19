/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:09:14 by hannkang          #+#    #+#             */
/*   Updated: 2023/08/31 18:58:46 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || 'Z' < str[i]) && (str[i] < 'a' || 'z' < str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main()
{
	char c[] = "";
	char d[] = "notallalphabet123";
	printf("empty: %d\n", ft_str_is_alpha(c));
	printf("not all alphabet: %d", ft_str_is_alpha(d));
} */