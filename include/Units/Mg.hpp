//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_MG_HPP
#define CONVERSION_MG_HPP

#include "Unit.hpp"

class Mg : public Unit {
public:
    void convert(long double&) override;
};

#endif //CONVERSION_MG_HPP
