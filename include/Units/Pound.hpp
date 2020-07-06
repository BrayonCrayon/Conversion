//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_POUND_HPP
#define CONVERSION_POUND_HPP

#include "Unit.hpp"

class Pound : public Unit {
public:
    void convert(long double&) override;
};

#endif //CONVERSION_POUND_HPP
