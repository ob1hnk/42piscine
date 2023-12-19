/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkang <hannkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:02:51 by hannkang          #+#    #+#             */
/*   Updated: 2023/09/07 18:58:36 by hannkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
	/*	status 0: not in word
		status 1: first letter in word
		status 2: in word but not first		*/

int	is_numeric(char *str, int i)
{
	if ('0' <= str[i] && str[i] <= '9')
		return (1);
	return (0);
}

int	is_upper(char *str, int i)
{
	if ('A' <= str[i] && str[i] <= 'Z')
		return (1);
	return (0);
}

int	is_lower(char *str, int i)
{
	if ('a' <= str[i] && str[i] <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	status;

	i = 0;
	status = 0;
	while (str[i] != '\0')
	{
		if (is_numeric(str, i) || is_upper(str, i) || is_lower(str, i))
		{
			status++;
			if (status == 1)
			{
				if (is_lower(str, i))
					str[i] -= 32;
			}
			else if (is_upper(str, i))
				str[i] += 32;
		}
		else
			status = 0;
		i++;
	}
	return (str);
}

/* int main(void) {
	char d[] = "ReKt17+LOl MdR Mdr 4242l42$";
	printf("%s\n", ft_strcapitalize(d));
} */