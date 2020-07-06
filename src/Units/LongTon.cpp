//
// Created by Brayon on 2020-07-04.
//

#include "../../include/Units/LongTon.hpp"

using namespace std;

void LongTon::convert(long double &mass) {
    cout << "Long Ton: " << mass << " <--> " << "Short ton: " << (SHORT_TON * mass) << endl;
}