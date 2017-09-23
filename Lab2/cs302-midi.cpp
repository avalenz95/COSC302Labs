/*Audaris Blades
Lab3
Convert MIDI Event/Note Files
*/

#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <list>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include "cs302-midi.h"
using namespace std;

//EL is Full
//Map is empty
void CS302_Midi::el_to_nd()
{
  nd = new NDMap;
  
  //Holds Note Damper Events
  //Indexed by pitch
  vector<ND*> tmp;
  
  //Create Vector of size 128
  tmp.resize(128);

  //Set Vector Values to NULL
  for(vector<ND*>::iterator it = tmp.begin(); it != tmp.end(); it++)
  		tmp.insert(it, NULL);
	
  //Loop through EventList
  for(list<Event *>::iterator it = EventList.begin(),it != EventList.end(); it++){
  	//Current event in the iteration
	Event * event = it;
	//Keeps track of the total time to insert into ND
	double timeSinceStart += event->time;
  	//Encountered On Event
  	if(event->key == 'O'){
		
      //Create ND
	  ND note = new ND();
      //Set ND Start time
	  //Time since last event
	  note->start = timeSinceStart;

  	}
    //Event is off
    if(event->key == 'F'){
      // Set stop time
      //Insert into ND
    }

    //DamperDown Event
    if(event->key == 'D'){

    }

    //DamperUpEvent
  }
}

void CS302_Midi::nd_to_el()
{
  el = new EventList;
}
