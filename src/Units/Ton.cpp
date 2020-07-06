//
// Created by Brayon on 2020-07-04.
//

#include "../../include/Units/Ton.hpp"

using namespace std;

void Ton::convert(long double &mass) {
    cout << "ton: " << mass << " <--> " << "shortTon: " << (SHORT_TON * mass) << endl;
}