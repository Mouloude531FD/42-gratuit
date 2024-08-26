/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilot-de <pilot-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:55:18 by pilot-de          #+#    #+#             */
/*   Updated: 2024/08/19 17:18:56 by pilot-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 15;
// 	printf("%d\n", nb);
// 	printf("%d\n", ft_iterative_factorial(nb));
// 	return (0);
// }
