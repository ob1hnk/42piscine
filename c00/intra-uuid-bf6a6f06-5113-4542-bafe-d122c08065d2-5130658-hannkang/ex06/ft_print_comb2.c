/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:40:15 by hannkang          #+#    #+#             */
/*   Updated: 2023/08/30 16:50:39 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	increment(char *l1, char *l2, char *r1, char *r2)
{
	*r2 = *r2 + 1;
	if (*r2 > '9')
	{
		*r1 = *r1 + 1;
		*r2 = '0';
	}
	if (*r1 > '9')
	{
		*l2 = *l2 + 1;
		*r1 = '0';
	}
	if (*l2 > '9')
	{
		*l1 = *l1 + 1;
		*l2 = '0';
	}
}

void	print_num(char l1, char l2, char r1, char r2)
{
	write(1, &l1, 1);
	write(1, &l2, 1);
	write(1, " ", 1);
	write(1, &r1, 1);
	write(1, &r2, 1);
	if (l1 != '9' || l2 != '8' || r1 != '9' || r2 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	l1;
	char	l2;
	char	r1;
	char	r2;

	l1 = '0';
	l2 = '0';
	r1 = '0';
	r2 = '0';
	while (l1 != '9' || l2 != '9')
	{
		increment(&l1, &l2, &r1, &r2);
		if (l1 < r1 || (l1 == r1 && l2 < r2))
		{
			print_num(l1, l2, r1, r2);
		}
	}
}

/* int	main(void)
{
	ft_print_comb2();
} */
