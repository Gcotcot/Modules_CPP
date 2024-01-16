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
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &numb)
{
	std::cout << "Copy constructor called\n";
	*this = numb;
}

Fixed::Fixed(const int numb)
{
	std::cout << "Int constructor called\n";
	this->num = numb << fract;
}

Fixed::Fixed(const float numb)
{
	std::cout << "Float constructor called\n";
	this->num = roundf(numb * ( 1 << fract));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator = (const Fixed &numb)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(numb.getRawBits());
	return *this;
}

int	Fixed::getRawBits(void) const
{	std::cout << "getRawBits member function called\n";
	return this->num;
}

void	Fixed::setRawBits(int const raw)
{
	this->num = raw;
}
