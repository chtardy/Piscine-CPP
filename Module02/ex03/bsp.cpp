/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <ctardy@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 01:54:19 by ctardy            #+#    #+#             */
/*   Updated: 2023/05/05 04:33:17 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// a checker plus tard

// float signedArea(Point point, Point a, Point b) {
// 	// signed_area = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
// 	return ((point.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - b.getY().toFloat()) - (a.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()));
// }


// bool bsp( Point const a, Point const b, Point const c, Point const point) {
// 	float tri1, tri2, tri3;
// 	bool has_neg, has_pos;

// 	tri1 = signedArea(point, a, b);
// 	tri2 = signedArea(point, b, c);
// 	tri3 = signedArea(point, c, a);

// 	has_neg = tri1 < 0 || tri2 < 0 || tri3 < 0;
// 	has_pos = tri1 > 0 || tri2 > 0 || tri3 > 0;

// 	return !(has_neg && has_pos);
// }
