/**
*Lucas Waldrop
*PokemonTeamBuilder v0.2
*07.10.22
**/

//headers
#include <iostream>
#include <fstream>
#include "PokemonT.h"
//namespace
using namespace std;

//main
int main(void){
	//variables
	PokemonT B;

	//run
	B.SetNum(1);
	B.SetName("Bulbasaur");
	B.SetCategory("SEED");
	B.SetTypeOne(TypeT::GRASS);
	B.SetTypeTwo(TypeT::POISON);
	B.SetHP(50);

	cout << B.GetNum() << endl;
	cout << B.GetName() << endl;
	cout << B.GetCategory() << endl;
	cout << TypeTToString(B.GetTypeOne()) << "\n" << TypeTToString(B.GetTypeTwo()) << endl;
	cout << B.GetHP();

	//exit
	return 0;
}