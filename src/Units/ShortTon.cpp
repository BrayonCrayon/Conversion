//
// Created by Brayon on 2020-07-04.
//

#include "../../include/Units/ShortTon.hpp"

using namespace std;

void ShortTon::convert(long double &mass) {
    cout << "short ton: " << mass << " <--> "
    << "tonne: " << (TON * mass) << " or long ton: "
    << (LONG_TON * mass) << endl;
}