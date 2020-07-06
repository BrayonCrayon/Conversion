//
// Created by Brayon on 2020-07-04.
//

#include "../../include/Units/Mg.hpp"

using namespace std;

void Mg::convert(long double &mass) {
    cout << "milligrams: " << mass << " <--> " << "stone: " << (STONE * mass) << endl;
}