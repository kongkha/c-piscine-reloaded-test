/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:26:41 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/26 11:25:25 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft_putchar.h>

void	ft_putchar(char ch)
{
	write(STDOUT_FILENO, &ch, 1);
}
