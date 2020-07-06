//Braydon Deroy
//Jan 20, 2015
//This src is intended to mass of earth to mass on the moom, and converts metric units to imperial units.

#include "../include/Measurement.hpp"
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

using namespace std;

int main()
{
    _CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
    _CrtSetReportMode( _CRT_WARN, _CRTDBG_MODE_DEBUG );
    Measurement measurement;
    measurement.run();
    _CrtDumpMemoryLeaks();
}