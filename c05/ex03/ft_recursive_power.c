/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:19:46 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/11 22:29:36 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/* int	main(void)
{
	printf("%d", ft_recursive_power(0, 8));
} */
