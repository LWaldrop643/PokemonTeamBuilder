/**
*LWaldrop643
*PTB - TypeT.cpp
*v0.1
*03.03.24
**/

//headers
#include "TypeT.h"

//functions
TypeT string_To_TypeT(std::string type){
	//variables
	TypeT result;

	//run
	if(type == "NORMAL"){
		result = TypeT::NORMAL;
	}else if(type == "FIRE"){
		result = TypeT::FIRE;
	}else if(type == "WATER"){
		result = TypeT::WATER;
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
	}else if(type == "DRAGON"){
		result = TypeT::DRAGON;
	}else if(type == "DARK"){
		result = TypeT::DARK;
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

std::string TypeT_To_String(TypeT type){
	//variables
	std::string result;

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
		case TypeT::DRAGON:
			result = "DRAGON";
			break;
		case TypeT::DARK:
			result = "DARK";
			break;
		case TypeT::STEEL:
			result = "STEEL";
			break;
		case TypeT::FAIRY:
			result = "FAIRY";
			break;
		default:
			result = "NA";
	}

	//exit
	return result;
}