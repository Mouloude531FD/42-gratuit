/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilot-de <pilot-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:36:43 by pilot-de          #+#    #+#             */
/*   Updated: 2024/08/21 15:01:35 by pilot-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[ac - i]);
		write (1, "\n", 1);
	}
	return (0);
}
