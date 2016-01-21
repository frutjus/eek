#pragma once

#include "Entity.h"
#include <map>
using namespace std;

class World
{
	map<double[2], Entity> entities; // <co-ordinates, object>
};
