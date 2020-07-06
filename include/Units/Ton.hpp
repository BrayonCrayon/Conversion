//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_TON_HPP
#define CONVERSION_TON_HPP

#include "Unit.hpp"

class Ton : public Unit {
public:
    void convert(long double&) override;
};

#endif //CONVERSION_TON_HPP
