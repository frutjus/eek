#pragma once

#include "input.h"

//inspired from Activities in Android apps.
//the idea is to be inherited and specialised, I think.
class Activity
{
	protected:
	Activity* parent_activity;
	
	public:
	Activity(Activity*);
	~Activity();
	void record_input(Input&);
	Activity* process();
};

Activity::Activity(Activity* parent)
{
	//all input will go to currently active (last created) Activity.
	//current Activity will be only one that does stuff. for now.
	//each Activity records the Activity it was created from, to
	//go back to when it ends.
	parent_activity = parent;
}

Activity::~Activity()
{
	//note to self: remember not to delete parent_activity. that would be bad.
}

void Activity::record_input(Input& input)
{
	//get input from Interface via Game,
	//and use whatever part of it is relevant,
	//by popping elements off the vectors within it
}

Activity* Activity::process()
{
	//process input and act upon it.
	//run gameplay elements if appropriate.
	//return a pointer the Activity which is consequently relevant;
	//if this Activity spawns a new one, return its pointer.
	//if this Activity ends, use "delete this" and return its parent's pointer.
	//should probably get it to also be able to send info to the parent or child Activity.
	
	return this;
}

class Ignition_activity : public Activity
{
	public:
	Ignition_activity();
	Activity* process();
};

Ignition_activity::Ignition_activity()
{
	parent_activity = 0;
}

Activity* Ignition_activity::process()
{
	return new Ingame_view(this); //first and only Activity to be used, for now.
}

class Ingame_view : public Activity
{
	public:
	Ingame_view(Activity* parent) : Activity(parent);
	void record_input(Input&);
	Activity* process();
};

void Ingame_view::record_input(Input& input)
{
	
}

Activity* Ingame_view::process()
{
	//for Ingame_view, this function would presumably be quite large
	//as it does all gameplayish stuff
	Activity* next_activity = this;
	
	
	
	return next_activity;
}