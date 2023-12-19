/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:21:37 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/09 18:17:07 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	check_space(char *str, int i)
{
	while (str[i] == ' ' || ('\a' <= str[i] && str[i] <= '\r'))
	{
		i++;
	}
	return (i);
}

int	check_sign(char *str, int *sign, int i)
{
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	val;

	i = 0;
	sign = 1;
	val = 0;
	while (str[i] != '\0')
	{
		i = check_space(str, i);
		i = check_sign(str, &sign, i);
		while ('0' <= str[i] && str[i] <= '9')
		{
			val *= 10;
			val += str[i] - '0';
			i++;
		}
		return (val);
	}
	return (-1);
}

/* int	main() {
	char *str = "  	22asd3";
	printf("%d", ft_atoi(str));
} */