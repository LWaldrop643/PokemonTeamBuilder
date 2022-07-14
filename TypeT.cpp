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
	switch(type){
		case TypeT::NORMAL:
			result = "NORMAL";
			break;
		case TypeT::FIRE:
			result = "FIRE";
			break;
		case TypeT::WATER:
			result = "WATER";
			break;
		case TypeT::GRASS:
			result = "GRASS";
			break;
		case TypeT::ELECTRIC:
			result = "ELECTRIC";
			break;
		case TypeT::ICE:
			result = "ICE";
			break;
		case TypeT::FIGHTING:
			result = "FIGHTING";
			break;
		case TypeT::POISON:
			result = "POISON";
			break;
		case TypeT::GROUND:
			result = "GROUND";
			break;
		case TypeT::FLYING:
			result = "FLYING";
			break;
		case TypeT::PSYCHIC:
			result = "PSYCHIC";
			break;
		case TypeT::BUG:
			result = "BUG";
			break;
		case TypeT::ROCK:
			result = "ROCK";
			break;
		case TypeT::GHOST:
			result = "GHOST";
			break;
		case TypeT::DARK:
			result = "DARK";
			break;
		case TypeT::DRAGON:
			result = "DRAGON";
			break;
		case TypeT::STEEL:
			result = "STEEL";
			break;
		case TypeT::FAIRY:
			result = "FAIRY";
			break;
		default:
			result = "NA";
			break;
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