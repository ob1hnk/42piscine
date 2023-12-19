/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:11:15 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/12 19:13:09 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2 || nb == 3)
		return (1);
	else if (nb == 4)
		return (0);
	while (i < (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	printf("%d", ft_is_prime(1009));
	printf("%d", ft_is_prime(1234567));
} */
