/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:17:11 by gcot              #+#    #+#             */
/*   Updated: 2023/10/19 16:22:52 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point {

	public :
		Point(void);
		Point(const Fixed &x, const Fixed &y);
		Point(float const x, float const y);
		Point(const Point &ref);
		Point &operator = (Point &ref);
		~Point(void);
		Fixed	get_x(void) const;
		Fixed	get_y(void) const;

	private :
		const Fixed	x;
		const Fixed	y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
