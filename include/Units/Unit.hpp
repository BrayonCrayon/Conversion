//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_UNIT_HPP
#define CONVERSION_UNIT_HPP
#include <cmath>
#include <iostream>

class Unit {
protected:
    // Metric Units
    const long double G = 28.3495231;
    const long double KG =  0.45359237;
    const long double TON = 0.90718;
    const long double LONG_TON = 0.892857143;
    const long double MG = 6350293.18;

    // Imperial Units
    const long double OZ = 0.0352739619;
    const long double LB = 2.20462262;
    const long double SHORT_TON = 1.10231;
    const long double SHORT_LG_TON = 1.12;
    const long double STONE = 1.57473044 * pow(10, -7);
public:
    virtual ~Unit()= default;
    virtual void convert(long double&) = 0;

};

#endif //CONVERSION_UNIT_HPP
