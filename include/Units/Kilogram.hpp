//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_KILOGRAM_HPP
#define CONVERSION_KILOGRAM_HPP

#include "Unit.hpp"

class Kilogram : public Unit {
public:
    void convert(long double&) override;
};

#endif //CONVERSION_KILOGRAM_HPP
