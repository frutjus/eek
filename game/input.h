#pragme once

#include <vector>

using namespace std;

//for non-mouse input
enum input_type
{
	
};

class Mouse_input
{
	enum Type
	{
		
	};
	
	int x, y;
};

//basically a massive info dump to store all input received from the player.
//will be created by Interface and passed to Game for processing.
//probably not the best idea, but whatevs.
class Input
{
	vector<Input_type> keyboard;
	vector<Mouse_type> mouse;
}