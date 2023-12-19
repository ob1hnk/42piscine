/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:09:55 by hannkang          #+#    #+#             */
/*   Updated: 2023/08/30 18:00:02 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main() {
    int a = 10, b = 3;
    int d, m;
    int *div = &d;
    int *mod = &m;

    ft_div_mod(a, b, &d, &m);
    printf("*div = %d, *mod = %d", *div, *mod);
} */