//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_SHORTTON_HPP
#define CONVERSION_SHORTTON_HPP

#include "Unit.hpp"

class ShortTon : public Unit {
public:
    void convert(long double&) override;
};

#endif //CONVERSION_SHORTTON_HPP
