/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:05:32 by marvin            #+#    #+#             */
/*   Updated: 2024/03/25 04:03:12 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_norminette(const char *str, int i, int sign)
{
	int	result;
	int	j;

	j = 0;
	result = 0;
	while (str[i + j] >= '0' && str[i + j] <= '9')
	{
		result = result * 10;
		result = result + (str[i + j] - '0');
		j++;
	}
	if (j >= 19)
	{
		if (sign == -1)
			return (0);
		return (-1);
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	return (ft_norminette(str, i, sign));
}

/*int	main(void)
{
	char chain[] = "-99999999999953535335539999999";
	printf("%d\n", ft_atoi(chain));
	printf("%d\n", atoi(chain));
}*/
