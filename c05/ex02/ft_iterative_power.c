/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilot-de <pilot-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 07:58:58 by pilot-de          #+#    #+#             */
/*   Updated: 2024/08/26 08:12:33 by pilot-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		result = result * nb;
		power --;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%i", ft_iterative_power(5, 5));
// 	return (0);
// }
