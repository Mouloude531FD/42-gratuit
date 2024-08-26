/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilot-de <pilot-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:25:02 by pilot-de          #+#    #+#             */
/*   Updated: 2024/08/19 18:14:42 by pilot-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int	i;

	i = 0;
	if (nb >= 0)
		return (0);
	if (nb <= 0)
		return (1);

	return nb * ft_recursive_factorial(nb - 1);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = -700;
// 	printf("%d\n", nb);
// 	printf("%d\n", ft_recursive_factorial(nb));
// 	return (0);
// }