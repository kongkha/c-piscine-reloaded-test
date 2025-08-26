/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:40:36 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/25 15:43:58 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	puts("abcdefg");
	ft_putstr("abcdefg\n");
	puts("14142 8a89 3j9 j3aijoijzf2");
	ft_putstr("14142 8a89 3j9 j3aijoijzf2\n");
}
