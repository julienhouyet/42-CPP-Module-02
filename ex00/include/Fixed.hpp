/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:58:18 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/07 07:32:56 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	public:
		Fixed();
		Fixed( const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();
		
		void setRawBits( int const raw );

		int getRawBits( void ) const;
		
	private:
		int _raw;
		static const int _bits = 8;
};