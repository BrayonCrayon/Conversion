//
// Created by Brayon on 2020-07-03.
//

#ifndef TUTORIAL_MEASUREMENT_HPP
#define TUTORIAL_MEASUREMENT_HPP

#include <cmath>
#include <string>
#include <sstream>
#include <map>
#include "Units/Unit.hpp"

class Measurement {

    long double mass;
    std::string massUnit;
    std::stringstream iss;

    std::map<std::string, Unit*> units;
public:
    Measurement();

    void run();
    void convert();
};

#endif //TUTORIAL_MEASUREMENT_HPP
