//
// Created by Brayon on 2020-07-04.
//

#include "../../include/Units/Pound.hpp"
using namespace std;

void Pound::convert(long double &mass) {
    cout << "Lb: " << mass << " <--> " << "Kg: " << (KG * mass) << endl;
}
