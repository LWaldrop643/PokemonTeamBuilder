/**
*LWaldrop643
*PTB - NatureT.h
*v0.1
*03.03.24
**/

//headers
#include "NatureT.h"

//functions
 NatureT string_To_NatureT(std::string nature){
	//variables
	NatureT result;

	//run
	if(nature == "HARDY"){
		result = NatureT::HARDY;
	}else if(nature == "LONELY"){
		result = NatureT::LONELY;
	}if(nature == "ADAMANT"){
		result = NatureT::ADAMANT;
	}else if (nature == "NAUGHTY"){
		result = NatureT::NAUGHTY;
	}else if(nature == "BRAVE"){
		result = NatureT::BRAVE;
	}else if(nature == "BOLD"){
		result = NatureT::BOLD;
	}else if(nature == "DOCILE"){
		result = NatureT::DOCILE;
	}else if(nature == "IMPISH") {
		result = NatureT::IMPISH;
	}else if(nature == "LAX"){
		result = NatureT::LAX;
	}else if(nature == "RELAXED"){
		result = NatureT::RELAXED;
	}else if(nature == "MODEST"){
		result = NatureT::MODEST;
	}else if(nature == "MILD"){
		result = NatureT::MILD;
	}else if(nature == "BASHFUL"){
		result = NatureT::BASHFUL;
	}else if(nature == "RASH"){
		result = NatureT::RASH;
	}else if(nature == "QUIET"){
		result = NatureT::QUIET;
	}else if(nature == "CALM"){
		result = NatureT::CALM;
	}else if(nature == "GENTLE"){
		result = NatureT::GENTLE;
	}else if(nature == "CAREUFL"){
		result = NatureT::CAREFUL;
	}else if(nature == "QUIRKY"){
		result = NatureT::QUIRKY;
	}else if(nature == "SASSY"){
		result = NatureT::SASSY;
	}else if(nature == "TIMID"){
		result = NatureT::TIMID;
	}else if(nature == "HASTY"){
		result = NatureT::HASTY;
	}else if(nature == "JOLLY"){
		result = NatureT::JOLLY;
	}else if(nature == "NAIVE"){
		result = NatureT::NAIVE;
	}else if(nature == "SERIOUS") {
		result = NatureT::SERIOUS;
	}else{
		result = NatureT::NA;
	}

	//exit
	return result;
}

std::string NatureT_To_String(NatureT nature){
	//variables
	std::string result;

	//run
	switch (nature) {
		case NatureT::HARDY:
			result = "HARDY";
			break;
		case NatureT::LONELY:
			result = "LONELY";
			break;
		case NatureT::ADAMANT:
			result = "ADAMANT";
			break;
		case NatureT::NAUGHTY:
			result = "NAUGHTY";
			break;
		case NatureT::BRAVE:
			result = "BRAVE";
			break;
		case NatureT::BOLD:
			result = "BOLD";
			break;
		case NatureT::DOCILE:
			result = "DOCILE";
			break;
		case NatureT::IMPISH:
			result = "IMPISH";
			break;
		case NatureT::LAX:
			result = "LAX";
			break;
		case NatureT::RELAXED:
			result = "RELAXED";
			break;
		case NatureT::MODEST:
			result = "MODEST";
			break;
		case NatureT::MILD:
			result = "MILD";
			break;
		case NatureT::BASHFUL:
			result = "BASHFUL";
			break;
		case NatureT::RASH:
			result = "RASH";
			break;
		case NatureT::QUIET:
			result = "QUIET";
			break;
		case NatureT::CALM:
			result = "CALM";
			break;
		case NatureT::GENTLE:
			result = "GENTLE";
			break;
		case NatureT::CAREFUL:
			result = "CAREFUL";
			break;
		case NatureT::QUIRKY:
			result = "QUIRKY";
			break;
		case NatureT::SASSY:
			result = "SASSY";
			break;
		case NatureT::TIMID:
			result = "TIMID";
			break;
		case NatureT::HASTY:
			result = "HASTY";
			break;
		case NatureT::JOLLY:
			result = "JOLLY";
			break;
		case NatureT::NAIVE:
			result = "NAIVE";
			break;
		case NatureT::SERIOUS:
			result = "SERIOUS";
			break;
		default:
			result = "NA";
	}

	//exit
	return result;
}