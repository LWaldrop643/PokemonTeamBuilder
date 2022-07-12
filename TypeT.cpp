/**
*Lucas Waldrop
*TypeT v0.1
*07.11.22
**/

//headers
#include <iostream>
#include "TypeT.h"
//namespace
using namespace std;

//functions
string TypeTToString(TypeT type){
	//variables
	string result;

	//run
	switch (type) {

	}

	//exit
	return result;
}

TypeT StringToTypeT(string type){
	//variables
	TypeT result;

	//run
	for(int x = 0; x < type.size(); x++){
		type[x] = toupper(type[x]);
	}

	if(type == "NORMAL"){
		result = TypeT::NORMAL;
	}else if(type == "FIRE"){
		result = TypeT::FIRE;
	}else if(type == "WATER"){
		result = TypeT::GRASS;
	}else if(type == "GRASS"){
		result = TypeT::GRASS;
	}else if(type == "ELECTRIC"){
		result = TypeT::ELECTRIC;
	}else if(type == "ICE"){
		result = TypeT::ICE;
	}else if(type == "FIGHTING"){
		result = TypeT::FIGHTING;
	}else if(type == "POISON"){
		result = TypeT::POISON;
	}else if(type == "GROUND"){
		result = TypeT::GROUND;
	}else if(type == "FLYING"){
		result = TypeT::FLYING;
	}else if(type == "PSYCHIC"){
		result = TypeT::PSYCHIC;
	}else if(type == "BUG"){
		result = TypeT::BUG;
	}else if(type == "ROCK"){
		result = TypeT::ROCK;
	}else if(type == "GHOST"){
		result = TypeT::GHOST;
	}else if(type == "DARK"){
		result = TypeT::DARK;
	}else if(type == "DRAGON"){
		result = TypeT::DRAGON;
	}else if(type == "STEEL"){
		result = TypeT::STEEL;
	}else if(type == "FAIRY"){
		result = TypeT::FAIRY;
	}else{
		result = TypeT::NA;
	}

	//exit
	return result;
}