/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colores_iters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/29 15:19:03 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	printimg(t_fractol *info)
{
	t_color	color;

	if (info->iters == info->max_iter)
	{
		mlx_put_pixel(info->img, info->x, info->y, 0x2f2f2fFF);
	}
	else
	{
		colores_blu(&color);
		info->color = coloresuno(&color, info->iters);
		mlx_put_pixel(info->img, info->x, info->y, info->color);
	}
}
