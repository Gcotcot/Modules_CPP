/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:22:58 by gcot              #+#    #+#             */
/*   Updated: 2023/10/19 16:29:33 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const Fixed &x, const Fixed &y) : x(x), y(y)
{
}

Point::Point(float const x, float const y) : x(x), y(y)
{
}

Point::Point(Point const &ref) : x(ref.get_x()), y(ref.get_y())
{
}

Point	&Point::operator = (Point &ref)
{
	return (ref);
}

Point::~Point(void)
{
}

Fixed	Point::get_x(void) const
{
	return (this->x);
}

Fixed	Point::get_y(void) const
{
	return (this->y);
}


bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	v_ab(a.get_x() - b.get_x(), a.get_y() - b.get_y());
	Point	v_bc(b.get_x() - c.get_x(), b.get_y() - c.get_y());
	Point	v_ca(c.get_x() - a.get_x(), c.get_y() - a.get_y());
	Point	v1(a.get_x() - point.get_x(), a.get_y() - point.get_y());
	Point	v2(b.get_x() - point.get_x(), b.get_y() - point.get_y());
	Point	v3(c.get_x() - point.get_x(), c.get_y() - point.get_y());
	
	float	verif_1 = (v_ab.get_x().toFloat() * v1.get_y().toFloat()) - (v1.get_x().toFloat() * v_ab.get_y().toFloat());
	float	verif_2 = (v_bc.get_x().toFloat() * v2.get_y().toFloat()) - (v2.get_x().toFloat() * v_bc.get_y().toFloat());
	float	verif_3 = (v_ca.get_x().toFloat() * v3.get_y().toFloat()) - (v3.get_x().toFloat() * v_ca.get_y().toFloat());
	
	std::cout << "\n\nv1 = " << verif_1 << "\n";
	std::cout << "v2 = " << verif_2 << "\n";
	std::cout << "v3 = " << verif_3 << "\n\n";
	if (verif_1 > 0 && verif_2 > 0 && verif_3 > 0)
		return (true);
	else if (verif_1 < 0 && verif_2 < 0 && verif_3 < 0)
		return (true);
	return (false);
}
