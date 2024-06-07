/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:58:18 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/07 15:29:27 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__
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

		bool operator>( const Fixed& other ) const;
		bool operator<( const Fixed& other ) const;
		bool operator>=( const Fixed& other ) const;
		bool operator<=( const Fixed& other ) const;
		bool operator==( const Fixed& other ) const;
		bool operator!=( const Fixed& other ) const;

		Fixed operator+( const Fixed& other ) const;
		Fixed operator-( const Fixed& other ) const;
		Fixed operator*( const Fixed& other ) const;
		Fixed operator/( const Fixed& other ) const;

		Fixed& operator++(); 
		Fixed operator++( int ); 
		Fixed& operator--();
		Fixed operator--( int );

		static Fixed& min( Fixed& a, Fixed& b );
		static const Fixed& min( const Fixed& a, const Fixed& b );
		static Fixed& max( Fixed& a, Fixed& b );
		static const Fixed& max( const Fixed& a, const Fixed& b );

		friend std::ostream& operator<<( std::ostream& os, const Fixed& fixed );
		
	private:
		int _raw;
		static const int _bits = 8;
};

#endif