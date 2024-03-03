/**
*LWaldrop643
*PTB - TypeT.h
*v0.1.1
*03.03.24
**/

#pragma once

//headers
#include <iostream>

//enum
enum class TypeT{NORMAL, FIRE, WATER, GRASS, ELECTRIC, ICE, FIGHTING, POISON, GROUND, FLYING, PSYCHIC, BUG, ROCK, GHOST, DRAGON, DARK, STEEL, FAIRY, NA};

//functions
TypeT string_To_TypeT(std::string type);
std::string TypeT_To_String(TypeT type);