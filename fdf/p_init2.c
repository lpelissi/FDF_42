/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_init2.c                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: lpelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 14:02:12 by lpelissi          #+#    #+#             */
/*   Updated: 2019/01/13 14:28:29 by lpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"


int p_init2(t_env *e)
{
	e->p->xx = L_IMG / e->cn * 0.6;
	e->p->yy = W_IMG / e->cn * 0.6;
	e->p->yd = 20;
	e->p->xd2 = 450;
	e->p->ctex = 1.1;
	e->p->ctey = -1;
	e->p->x = 0;
	e->p->y = 0;
	e->p->acc = 1000;
	return (0);
}