/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:42:42 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/13 16:21:35 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* 	• Create a function ft_range which returns an array of ints. This int array should
		contain all values between min and max.
	• Min included - max excluded. */

/* 	if min´value is greater or equal to max’s value,
	a null pointer should be returned. */

int *ft_range(int min, int max)
{
	int	i;
	int	*ans;
	int	diff;

	i = 0;
	ans = NULL;
	diff = max - min;
	if (min >= max)
		return (ans);
	ans = (int *)malloc(diff * sizeof(int));
	while (i < diff)
	{
		ans[i] = min + i;
		i++;
	}

	return (ans);
}

#include <stdio.h>

int	main()
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (ft_range(3, 3) == NULL)
		{
			printf("return value: null pointer\n");
			return (0);	
		}
		printf("%d", ft_range(3, 4)[i]);
		i++;
	}
}