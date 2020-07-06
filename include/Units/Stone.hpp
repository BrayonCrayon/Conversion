//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_STONE_HPP
#define CONVERSION_STONE_HPP

#include "Unit.hpp"

class Stone : public Unit {
public:
    void convert(long double&) override;
};

#endif //CONVERSION_STONE_HPP
