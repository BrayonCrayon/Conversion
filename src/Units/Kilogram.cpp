//
// Created by Brayon on 2020-07-04.
//

#include "../../include/Units/Kilogram.hpp"
using namespace std;

void Kilogram::convert(long double &mass) {
    cout << "kg: " << mass << " <--> " << "lb: " << (LB * mass) << endl;
}

