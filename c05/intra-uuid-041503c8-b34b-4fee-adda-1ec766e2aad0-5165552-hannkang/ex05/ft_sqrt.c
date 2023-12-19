/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:15:34 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/12 16:22:34 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	errorcase(int nb)
{
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	return (-1);
}

int	final_return(int ans, int nb, char flag)
{
	if (ans * ans == nb)
		return (ans);
	if (flag == 2)
		ans -= 1;
	else
		ans += 1;
	if (ans * ans == nb)
		return (ans);
	else
		return (0);
}

int	ft_sqrt(int nb)
{
	int		ans;
	int		block;
	char	flag;

	ans = nb / 2;
	block = nb / 2;
	if (nb <= 1)
		return (errorcase(nb));
	while (ans * ans != nb && block >= 1)
	{
		if (ans * ans < nb)
		{
			flag = 1;
			block /= 2;
			ans += block;
		}
		else if (ans * ans > nb)
		{
			flag = 2;
			block /= 2;
			ans -= block;
		}
	}
	return (final_return(ans, nb, flag));
}

/* int	main(void)
{
	printf("%d", ft_sqrt(1024));
} */
