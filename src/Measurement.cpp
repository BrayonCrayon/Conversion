//
// Created by Brayon on 2020-07-03.
//

#include "../include/Measurement.hpp"
#include "../include/Units/Gram.hpp"
#include "../include/Units/Kilogram.hpp"
#include "../include/Units/Ton.hpp"
#include "../include/Units/LongTon.hpp"
#include "../include/Units/Mg.hpp"
#include "../include/Units/Ounce.hpp"
#include "../include/Units/Pound.hpp"
#include "../include/Units/ShortTon.hpp"
#include "../include/Units/Stone.hpp"
#include <iostream>

using namespace std;

Measurement::Measurement(): mass(0.0), massUnit("") {
        // Metric Units
        units["g"] = new Gram;
        units["gg"] = units["g"];
        units["grams"] = units["g"];
        units["gram"] = units["g"];
        units["kg"] = new Kilogram;
        units["kgkg"] = units["kg"];
        units["ton"] = new Ton;
        units["tonton"] = units["ton"];
        units["tonne"] = units["ton"],
        units["longton"] = new LongTon;
        units["mg"] = new Mg;
        units["mgmg"] = units["mg"];

        // Imperial Units
        units["oz"] = new Ounce;
        units["ozoz"] = units["oz"];
        units["lb"] = new Pound;
        units["lblb"] = units["lb"];
        units["shortton"] = new ShortTon;
        units["shtn"] = units["shortton"];
        units["stone"] = new Stone;
}

void Measurement::run() {
    cout << "Enter a weight and a unit of measurement: ";
    string input;
    getline(cin, input);
    iss << input;
    iss >> mass >> massUnit >> massUnit;
    convert();
}

void Measurement::convert() {
    Unit* unit = units[massUnit];

    if (unit) {
        unit->convert(mass);
    } else {
        cout << "invalid input please enter a valid measurement and mass.\n";
    }
}
