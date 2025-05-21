/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:41:41 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/21 16:21:26 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int constBit = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed &other);
    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed &operator=(const Fixed &other);
    bool operator>(const Fixed &a);
    bool operator<(const Fixed &a);
    bool operator>=(const Fixed &a);
    bool operator<=(const Fixed &a);
    bool operator==(const Fixed &a);
    bool operator!=(const Fixed &a);
    Fixed &operator+(const Fixed &a);
    Fixed &operator-(const Fixed &a);
    Fixed &operator*(const Fixed &a);
    Fixed &operator/(const Fixed &a);
    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    static const Fixed &min(const Fixed &a, const Fixed &b); 
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static  Fixed &max( Fixed &a,  Fixed &b);
    static  Fixed &min( Fixed &a,  Fixed &b);
    // static Fixed &  min(Fixed &a, Fixed &b); 
};
std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
