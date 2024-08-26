/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilot-de <pilot-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:45:27 by pilot-de          #+#    #+#             */
/*   Updated: 2024/08/20 16:02:18 by pilot-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i != argc)
	{
		write (1, argv[i], ft_strlen(argv[i]));

		write (1, "\n", 1);
		i++;
	}
	return (i);
}