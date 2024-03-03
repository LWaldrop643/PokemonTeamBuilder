/**
*LWaldrop643
*PTB - NatureT.h
*v0.1.1
*03.03.24
**/

#pragma once

//headers
#include <iostream>

//enum
enum class NatureT{HARDY, LONELY, ADAMANT, NAUGHTY, BRAVE, BOLD, DOCILE, IMPISH, LAX, RELAXED, MODEST, MILD, BASHFUL, RASH, QUIET, CALM, GENTLE, CAREFUL, QUIRKY, SASSY, TIMID, HASTY, JOLLY, NAIVE, SERIOUS, NA};

//functions
NatureT string_To_NatureT(std::string nature);
std::string NatureT_To_String(NatureT nature);