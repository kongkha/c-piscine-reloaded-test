/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:20:09 by pkongkha          #+#    #+#             */
/*   Updated: 2025/05/23 18:41:22 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		dividend;
	int		num;
	char	ch;

	while (1)
	{
		num = nb;
		dividend = 1;
		while (num > 9)
		{
			dividend *= 10;
			num /= 10;
		}
		ch = '0' + (nb / dividend);
		write(1, &ch, 1);
		if (dividend == 1)
			break ;
		nb %= dividend;
	}
}

/*int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(42174712);
	return (0);
}*/
