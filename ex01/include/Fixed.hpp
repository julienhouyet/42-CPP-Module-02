/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:58:18 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/07 07:53:07 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed( const int number );
		Fixed( const float number );
		Fixed( const Fixed& copy );
		Fixed& operator=( const Fixed& copy );
		~Fixed();
		
		void setRawBits( int const raw );

		int getRawBits( void ) const;

		float toFloat( void ) const;
		int toInt( void ) const;

		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
		
	private:
		int _raw;
		static const int _bits = 8;
};