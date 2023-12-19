/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:12:21 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/11 22:29:30 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	• A power lower than 0 returns 0.
	• Overflows must not be handled.
	• We’ve decided that 0 power 0 will returns 1 	*/

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < power)
	{
		ans *= nb;
		i++;
	}
	return (ans);
}

/* int	main(void)
{
	printf("%d", ft_iterative_power(0, 9));
} */
