/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 09:30:28 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/26 09:48:19 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putnbr(int nb);

void	ft_putnbr_newline(int nb)
{
	ft_putnbr(nb);
	write(STDOUT_FILENO, "\n", 1);
}

int	main(void)
{
	int				tab[24];
	unsigned long	i;

	i = 0;
	while (i < (sizeof(tab) / sizeof(*tab)))
	{
		tab[i] = i;
		++i;
	}
	ft_foreach(tab, sizeof(tab) / sizeof(*tab), &ft_putnbr_newline);
}
