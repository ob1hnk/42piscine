/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:21:20 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/10 15:22:27 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_last(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	buffer[20];

	i = 0;
	check_last(nb);
	if (nb == -2147483648)
		return ;
	if (nb > -2147483648 && nb < 0)
	{
		write(1, "-", 1);
		nb = 0 - nb;
	}
	while (nb / 10 > 0)
	{
		buffer[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	buffer[i] = nb + '0';
	while (i >= 0)
	{
		write(1, &buffer[i], 1);
		i--;
	}
}

/* int	main(void)
{
	ft_putnbr(-2147483648);
} */
