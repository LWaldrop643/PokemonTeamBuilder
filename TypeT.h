/**
*Lucas Waldrop
*TypeT v0.1
*07.11.22
**/

//headers
#include <string>

//enum
enum class TypeT{ NA, NORMAL, FIRE, WATER, GRASS, ELECTRIC, ICE, FIGHTING, POISON, GROUND, FLYING, PSYCHIC, BUG, ROCK, GHOST, DARK, DRAGON, STEEL, FAIRY};

//functions
std::string TypeTToString(TypeT type);
TypeT StringToTypeT(std::string type);