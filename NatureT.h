/**
*LWaldrop643
*PTB - TypeT.h
*v0.1
*02.19.24
**/

#pragma once

//headers
#include <iostream>

//enum
enum class NatureT{HARDY, LONELY, ADAMANT, NAUGHTY, BRAVE, BOLD, DOCILE, IMPISH, LAX, RELAXED, MODEST, MILD, BASHFUL, RASH, QUIET, CALM, GENTLE, CAREFUL, QUIRKY, SASSY, TIMID, HASTY, JOLLY, NAIVE, SERIOUS};

//functions
NatureT string_To_NatureT(std::string);
std::string NatureT_To_String(NatureT);