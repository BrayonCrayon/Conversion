//
// Created by Brayon on 2020-07-04.
//

#ifndef CONVERSION_LONGTON_HPP
#define CONVERSION_LONGTON_HPP

#include "Unit.hpp"

class LongTon : public Unit {
public:
    void convert(long double&) override;
};

#endif //CONVERSION_LONGTON_HPP
