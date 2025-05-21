/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:42:06 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/21 11:19:54 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = num << this->constBit;
}
Fixed::Fixed(const float num)
{
    int scale = 1 << constBit;
    this->value = roundf(num * scale);
    std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    return this->value >> this->constBit;
}
float Fixed::toFloat(void) const
{
    int scale = 1 << constBit;

    float fff = ((float)this->value / scale);
    return fff;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->value = other.getRawBits();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}