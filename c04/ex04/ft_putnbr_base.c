/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 00:31:38 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/10 19:52:14 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_same(char *base, int i)
{
	int	j;

	j = i + 1;
	while (base[j] != '\0')
	{
		printf("base[j]: %c\ni: %d, j: %d\n", base[j], i, j);
		if (base[i] == base[j])
		{
			
			return (1);
		}
		j++;
	} 
	return (0);
}

void	ft_putnbr_base(int nbr, char *base) {
	int	i;

	i = 0;
	(void)(nbr);
	if (base[0] == '\0' || base[1] == '\0') {
		printf("base size 0 or 1");
		return ;
	}
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-') {
			printf("+-");
			return ;
		}
		if (check_same(base, i)) {
			printf("same");
			return ;
		}
		
	}
	if (i < 2) return ;
	// print_base();
}

int main() {
    char *str = "abcde";
	ft_putnbr_base(42, str);
}