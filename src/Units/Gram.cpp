//
// Created by Brayon on 2020-07-04.
//

#include "../../include/Units/Gram.hpp"

using namespace std;

void Gram::convert(long double& mass) {
    cout << "g: " << mass << " <--> " << "oz: " << (OZ * mass) << endl;
}
