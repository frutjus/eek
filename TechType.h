#pragma once

#include <vector>
using namespace std;

//added this just so I could make some vague progress

class TechType
{
	int ID; //int is probably fine
	vector<int> prerequisites, dependants; //these refer to other TechType items
};