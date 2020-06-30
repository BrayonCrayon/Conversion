//Braydon Deroy
//Jan 20, 2015
//This program is intended to mass of earth to mass on the moom, and converts metric units to imperial units.

#include <string>;
#include <iostream>;
#include <math.h>;
#include <sstream>;
#include <istream>;
#include <regex>;

using namespace std;

//Fuctions that print and calculate conversions
void gramToOz(double ounces, double mass)
{
	cout << "g: " << mass << " <--> " << "oz: " << (ounces * mass) << endl;
}

void ozToGram(double grams, double mass)
{
	cout << "oz: " << mass << " <--> " << "g: " << (grams * mass) << endl;
}

void kgToLb(double pounds, double mass)
{
	cout << "kg: " << mass << " <--> " << "lb: " << (pounds * mass) << endl;
}

void lbToKg(double kilograms, double mass)
{
	cout << "Lb: " << mass << " <--> " << "Kg: " << (kilograms * mass) << endl;
}

void tonToShortTon(double shortTon, double mass)
{
	cout << "ton: " << mass << " <--> " << "shortTon: " << (shortTon * mass) << endl;
}

void mgToStone(double stone, double mass)
{
	cout << "milligrams: " << mass << " <--> " << "stone: " << (stone * mass) << endl;
}

void stoneToMg(double milligrams, double mass)
{
	cout << "stone: " << mass << " <--> " << "milligrams: " << (milligrams * mass) << endl;
}

void shortTonToTon(double ton, double mass, double longton)
{
	cout << "short ton: " << mass << " <--> " << "tonne: " << (ton * mass) << " or long ton: " << (longton * mass) << endl;
}

void longTonToShort(double shorttn, double mass)
{
	cout << "Long Ton: " << mass << " <--> " << "Short ton: " << (shorttn * mass) << endl;
}
int main()
{
	//metric units
	auto g = 28.3495231;
	auto kg =  0.45359237;
	auto ton = 0.90718;
	auto longton = 0.892857143;
	auto mg = 6350293.18;
	
	//imperial units
	auto oz = 0.0352739619;
	auto lb = 2.20462262;
	auto shortTn = 1.10231;
	auto shortLgTn = 1.12;
	auto stone = 1.57473044 * pow(10, -7);
	
	//user enters a mass and a unit of measurement
	cout << "Enter a weight and a unit of measurement: ";
	double mass = 0;
	string word1 = " ";
	string word2;
	string measurement = "";
	string unitAndMass;
	
	//cin >> mass >> measurement;
	getline(cin, unitAndMass);
	stringstream iss(unitAndMass);
	iss >> mass >> word1 >> word2;

	//this can read two words 
	bool emptyword = word2.empty();
	if (emptyword)
		measurement = word1;
	else
		measurement = (word1 + word2);
	
	// matching user input with unit of measurement
	regex reg_icase(measurement,regex::icase);

	if (regex_match("g", reg_icase) || regex_match("gg", reg_icase))	
		gramToOz(oz, mass);
	else if (regex_match("grams", reg_icase))
		gramToOz(oz, mass);
	else if (regex_match("gram", reg_icase))
		gramToOz(oz, mass);
	else if (regex_match("oz", reg_icase) || regex_match("ozoz", reg_icase))
		ozToGram(g, mass);
	else if (regex_match("kg", reg_icase) || regex_match("kgkg", reg_icase))
		kgToLb(lb, mass);
	else if (regex_match("lb", reg_icase) || regex_match("lblb", reg_icase))
		lbToKg(kg, mass);
	else if (regex_match("longton", reg_icase))
		longTonToShort(shortLgTn, mass);
	else if (regex_match("tonne", reg_icase))
		tonToShortTon(shortTn, mass);
	else if (regex_match("shtn", reg_icase))
		shortTonToTon(ton, mass, longton);
	else if (regex_match("shortton", reg_icase))
		shortTonToTon(ton, mass, longton);
	else if (regex_match("mg", reg_icase) || regex_match("mgmg", reg_icase))
		mgToStone(stone, mass);
	else if (regex_match("stone", reg_icase))
		stoneToMg(ton, mass);
	else
		cout << "invalid input please enter a valid measurement and mass.\n";


	//////earth to mass conversion...................................
	//cout << "Enter your mass on earth: ";
	//double earthMass;
	//cin >> earthMass;
	//double const EQUATORIAL_SURFACE_GRAVITY = 0.1654;
	//double moonMass = EQUATORIAL_SURFACE_GRAVITY * earthMass;
	//cout << "Mass on the moon : " << moonMass << endl;

	//g -- oz
	//kg -- lbs
	//tonne -- short ton
}