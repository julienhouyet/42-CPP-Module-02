/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:58:24 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/07 15:30:49 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _raw( 0 )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int number )
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw = number << _bits;
}

Fixed::Fixed( const float number )
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(number * (1 << _bits));
}

Fixed::Fixed( const Fixed& copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed& copy )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy) {
		this->_raw = copy.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(_raw) / (1 << _bits);
}

int Fixed::toInt( void ) const
{
	return _raw >> _bits;
}

std::ostream& operator<<( std::ostream& os, const Fixed& fixed )
{
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator>( const Fixed& other ) const
{
	return this->_raw > other._raw;
}

bool Fixed::operator<( const Fixed& other ) const
{
	return this->_raw < other._raw;
}

bool Fixed::operator>=( const Fixed& other ) const
{
	return this->_raw >= other._raw;
}

bool Fixed::operator<=( const Fixed& other ) const
{
	return this->_raw <= other._raw;
}

bool Fixed::operator==( const Fixed& other ) const
{
	return this->_raw == other._raw;
}

bool Fixed::operator!=( const Fixed& other ) const
{
	return this->_raw != other._raw;
}

Fixed Fixed::operator+( const Fixed& other ) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-( const Fixed& other ) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*( const Fixed& other ) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/( const Fixed& other ) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
	this->_raw++;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed temp(*this);
	this->_raw++;
	return temp;
}

Fixed& Fixed::operator--()
{
	this->_raw--;
	return *this;
}

Fixed Fixed::operator--( int )
{
	Fixed temp(*this);
	this->_raw--;
	return temp;
}

Fixed& Fixed::min( Fixed& a, Fixed& b )
{
	return (a < b) ? a : b;
}

const Fixed& Fixed::min( const Fixed& a, const Fixed& b )
{
	return (a < b) ? a : b;
}

Fixed& Fixed::max( Fixed& a, Fixed& b )
{
	return (a > b) ? a : b;
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b )
{
	return (a > b) ? a : b;
}