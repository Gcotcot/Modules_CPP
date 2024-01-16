/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:09:14 by gcot              #+#    #+#             */
/*   Updated: 2023/10/14 14:31:50 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {

	public :
		Fixed(void);
		Fixed(const Fixed &numb);
		Fixed(const int numb);
		Fixed(const float numb);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed &operator = (const Fixed &numb);
		int operator < (const Fixed &numb) const;
		int operator > (const Fixed &numb) const;
		int operator <= (const Fixed &numb) const;
		int operator >= (const Fixed &numb) const;
		int operator == (const Fixed &numb) const;
		int operator != (const Fixed &numb) const;
		Fixed operator + (const Fixed &numb) const;
		Fixed operator - (const Fixed &numb) const;
		Fixed operator * (const Fixed &numb) const;
		Fixed operator / (const Fixed &numb) const;
		Fixed &operator++(void);//before
		Fixed &operator--(void);
		Fixed operator++(int n);//after
		Fixed operator--(int n);
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

	private :
		int			num;
		static const int	fract = 16;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
