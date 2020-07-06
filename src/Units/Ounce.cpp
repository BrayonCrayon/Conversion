//
// Created by Brayon on 2020-07-04.
//

#include "../../include/Units/Ounce.hpp"
using namespace std;

void Ounce::convert(long double &mass) {
    cout << "oz: " << mass << " <--> " << "g: " << (G * mass) << endl;
}

