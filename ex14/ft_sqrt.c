/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:28:39 by schmurz           #+#    #+#             */
/*   Updated: 2017/11/08 12:19:13 by dsaadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 4)
		return (2);
	if (nb == 1)
		return (1);
	while (i < nb / 3 && i < 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
