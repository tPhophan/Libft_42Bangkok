/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:18:18 by tphophan          #+#    #+#             */
/*   Updated: 2022/06/02 15:52:31 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (48 <= c && c <= 57)
	{
		return (1);
	}
	else if (65 <= c && c <= 90)
	{
		return (1);
	}
	else if (97 <= c && c <= 122)
	{
		return (1);
	}
	return (0);
}
