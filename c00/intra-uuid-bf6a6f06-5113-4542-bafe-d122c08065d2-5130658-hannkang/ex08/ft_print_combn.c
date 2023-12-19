/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:27:43 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/11 22:26:29 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initialize_buffer(char *buffer)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		buffer[i] = '0' + i;
		i++;
	}
}

void	print_num(int n, char *buffer)
{
	char	is_end;
	int		i;

	is_end = 0;
	i = 0;
	while (i < n)
	{
		write(1, &buffer[i], 1);
		i++;
	}
	if (buffer[0] == '9' - n + 1)
	{
		is_end = 1;
	}
	if (is_end == 0)
	{
		write(1, ", ", 2);
	}
}

void	recursion(int i, int n, char *buffer)
{
	while (buffer[i] <= '9' - n + i + 1)
	{
		if (n - i == 1)
		{
			print_num(n, buffer);
			buffer[n - 1]++;
		}
		else
		{
			buffer[i + 1] = buffer[i] + 1;
			recursion(i + 1, n, buffer);
			buffer[i]++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	buffer[11];

	initialize_buffer(buffer);
	recursion(0, n, buffer);
}

/* int	main(void)
{
	ft_print_combn(2);
	return (0);
} */
