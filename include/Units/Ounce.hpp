//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_OUNCE_HPP
#define CONVERSION_OUNCE_HPP

#include "Unit.hpp"

class Ounce : public Unit {
public:
    void convert(long double&) override;
};

#endif //CONVERSION_OUNCE_HPP
