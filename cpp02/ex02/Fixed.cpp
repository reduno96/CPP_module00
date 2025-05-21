/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:42:06 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/21 16:22:50 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
}
Fixed::Fixed(const int num)
{
    this->value = num << this->constBit;
}
Fixed::Fixed(const float num)
{
    int scale = 1 << constBit;
    this->value = roundf(num * scale);
}

int Fixed::toInt(void) const
{
    return this->value >> this->constBit;
}

float Fixed::toFloat(void) const
{
    int scale = 1 << constBit;
    float fff = static_cast<float> (this->value) / scale;
    return fff;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        this->value = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}
 
bool Fixed::operator>(const Fixed &a)
{
    return this->value > a.getRawBits();
}
bool Fixed::operator<(const Fixed &a)
{
    return this->value < a.getRawBits();
}
bool Fixed::operator>=(const Fixed &a)
{
    return this->value >= a.getRawBits();
}
bool Fixed::operator<=(const Fixed &a)
{
    return this->value >= a.getRawBits();
}
bool Fixed::operator==(const Fixed &a)
{
    return this->value == a.getRawBits();
}
bool Fixed::operator!=(const Fixed &a)
{
    return this->value != a.getRawBits();
}

Fixed &Fixed::operator+(const Fixed &a)
{
    Fixed *ptr = new Fixed((this->toFloat()  + a.toFloat() ));
    return *ptr;
}

Fixed &Fixed::operator-(const Fixed &a)
{
    Fixed *ptr = new Fixed((this->toFloat()  - a.toFloat() ));
    return *ptr;
}

Fixed &Fixed::operator*(const Fixed &a)
{
   Fixed *ptr = new Fixed((this->toFloat()  * a.toFloat()));
    return *ptr;
}
Fixed &Fixed::operator/(const Fixed &a)
{
   Fixed *ptr = new Fixed((this->toFloat()  / a.toFloat() ));
   return *ptr;
}
Fixed &Fixed::operator++()
{
    ++value;
    return *this;
}
Fixed &Fixed::operator--()
{
    ++value;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed curr = *this;
    value++;
    return curr;
}
Fixed Fixed::operator--(int)
{
    Fixed curr = *this;
    value--;
    return curr;
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{ 
    return ((a.toFloat() > b.toFloat()) ? b : a);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{ 
    return ((a.toFloat() < b.toFloat()) ? b : a);
}

Fixed  &Fixed::min( Fixed &a,  Fixed &b)
{ 
    return ((a.toFloat() > b.toFloat()) ? b : a);
}

Fixed  &Fixed::max( Fixed &a,  Fixed &b)
{ 
    return ((a.toFloat() < b.toFloat()) ? b : a);
}


