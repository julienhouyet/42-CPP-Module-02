/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:58:24 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/06 16:42:00 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{
	
}

Fixed::~Fixed()
{
	
}

void Fixed::setRawBits(int const raw)
{
	
}

int Fixed::getRawBits(void) const
{
	return this->_fixed;
}