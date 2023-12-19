/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:31:15 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/12 16:27:26 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;
	int	n;

	i = 0;
	ans = 1;
	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < n && nb >= 1)
	{
		ans *= nb;
		nb--;
		i++;
	}
	return (ans);
}

/* int	main(void)
{
	printf("%d", ft_iterative_factorial(6));
}*/
