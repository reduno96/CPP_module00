/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:41:41 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/17 23:19:02 by rel-mora         ###   ########.fr       */
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
    Fixed &operator=(const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
std::ostream &operator<<(std::ostream &os, const Fixed &obj);
#endif
