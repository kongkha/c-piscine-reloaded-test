/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:36:50 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/26 11:24:51 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_strlen.h>

int	ft_strlen(char *str)
{
	char	*str_o;

	str_o = str;
	while (*str)
		++str;
	return (str - str_o);
}
