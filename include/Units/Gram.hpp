//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_GRAM_HPP
#define CONVERSION_GRAM_HPP

#include "Unit.hpp"

class Gram : public Unit {
public:
    void convert(long double&) override;
};

#endif //CONVERSION_GRAM_HPP
