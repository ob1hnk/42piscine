/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:17:58 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/13 21:59:52 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  • The size of range should be returned (or -1 on error).
    • If the value of min is greater or equal to max’s value, range will point on NULL
        and it should return 0. */


#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;
	int	*temp;

	i = 0;
	diff = max - min;
	range = NULL;
	if (min >= max)
		return (0);
	temp = (int *)malloc(diff * sizeof(int));
	if (temp == NULL || range == NULL)
		return (-1);
	while (i < diff)
	{
		temp[i] = min + i;
		i++;
	}
	*range = temp;
	i = 0;
	return (diff);
}

int	main()
{
	int	i;
	int	n;
	int *arr = &n;

	i = 0;
	printf("%d", ft_ultimate_range(&arr, 3, 7));
	while (i < 5)
	{
		printf("%d", arr[i]);
		i++;
	}
}
