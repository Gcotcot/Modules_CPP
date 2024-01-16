/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:15:50 by gcot              #+#    #+#             */
/*   Updated: 2023/10/14 14:33:36 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : num(0)
{
}

Fixed::Fixed(Fixed const &numb)
{
	*this = numb;
}

Fixed::Fixed(const int numb)
{
	this->num = numb << fract;
}

Fixed::Fixed(const float numb)
{
	this->num = roundf(numb * ( 1 << fract));
}

Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits(void) const
{
	return this->num;
}

void	Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

int	Fixed::toInt(void) const
{
	return this->num >> fract;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>( this->getRawBits() ) / ( 1 << fract );
}

Fixed	&Fixed::operator = (const Fixed &numb)
{
	this->setRawBits(numb.getRawBits());
	return *this;
}

int	Fixed::operator < (const Fixed &numb) const
{
	if (this->getRawBits() < numb.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator > (const Fixed &numb) const
{
	if (this->getRawBits() > numb.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator <= (const Fixed &numb) const
{
	if (this->getRawBits() <= numb.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator >= (const Fixed &numb) const
{
	if (this->getRawBits() >= numb.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator == (const Fixed &numb) const
{
	if (this->getRawBits() == numb.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator != (const Fixed &numb) const
{
	if (this->getRawBits() != numb.getRawBits())
		return (1);
	return (0);
}

Fixed	Fixed::operator + (const Fixed &numb) const
{
	Fixed res(this->toFloat() + numb.toFloat());
	return (res);
}

Fixed	Fixed::operator - (const Fixed &numb) const
{
	Fixed res(this->toFloat() - numb.toFloat());
	return (res);
}

Fixed	Fixed::operator * (const Fixed &numb) const
{
	Fixed res(this->toFloat() * numb.toFloat());
	return (res);
}

Fixed	Fixed::operator / (const Fixed &numb) const
{
	Fixed res(this->toFloat() / numb.toFloat());
	return (res);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::operator++(void)
{
	this->num += 1;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->num -= 1;
	return (*this);
}

Fixed Fixed::operator++(int n)
{
	Fixed	temp = *this;
	(void)n;
	this->num += 1;
	return (temp);
}

Fixed Fixed::operator--(int n)
{
	Fixed	temp = *this;
	(void)n;
	this->num -= 1;
	return (temp);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream & operator << (std::ostream & o, Fixed const & i)
{
    o << i.toFloat();
    return o;
}
