/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:37:55 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/26 11:25:14 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_putchar.h>
#include <ft_putstr.h>

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
