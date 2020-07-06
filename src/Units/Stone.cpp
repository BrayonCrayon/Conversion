//
// Created by Brayon on 2020-07-04.
//

#include "../../include/Units/Stone.hpp"

using namespace std;

void Stone::convert(long double &mass) {
    cout << "stone: " << mass << " <--> " << "milligrams: " << (MG * mass) << endl;
}