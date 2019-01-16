/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 14:02:12 by lpelissi          #+#    #+#             */
/*   Updated: 2019/01/13 14:28:29 by lpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"



int	draw_line(t_env *e, float x1, float y1, float x2, float y2)
{
	float x;
	float y;
	float coef;
	float cte;
	float i;
	i = 0;
	if (x1 == x2)
	{
		while (i < e->p->acc)
		{
			y =  y1 + i * (y2 - y1) / e->p->acc;
			x = x1;
			e->m->data[((int)x + (int)y * L_IMG)] = BLUE;
			i++;
		}
	}
	else
	{
		coef = (y1 - y2) / (x1 - x2);
		cte = (float)y1 - coef * x1;
		while (i <= e->p->acc)
		{
			x =  x1 + i * (x2 - x1) / e->p->acc;
			y = coef * x + cte;
			if (y != y1)
				e->m->data[((int)x + (int)y * L_IMG)] = GREY;
			else
				e->m->data[((int)x + (int)y * L_IMG)] = BLUE;
			i++;
		}
		
	}
	return(0);
}




