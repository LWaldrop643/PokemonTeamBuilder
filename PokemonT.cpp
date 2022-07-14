/**
*Lucas Waldrop
*PokemonT v0.1
*07.11.22
**/

//headers
#include <iostream>
#include "PokemonT.h"
//namespace
using namespace std;

//class functions
//default ctor
PokemonT::PokemonT(void) : num(0), name(""), category(""), typeOne(TypeT::NA), typeTwo(TypeT::NA), hp(0), attack(0), defense(0), sAttack(0), sDefense(0), speed(0), height(""), weight(0.0) {}
//param ctor
PokemonT::PokemonT(int n, string nm, string c, TypeT o, TypeT t, int h, int a, int d, int sA, int sD, int s, string ht, double w) : num(n), name(nm), category(c), typeOne(o), typeTwo(t), hp(h), attack(a), defense(d), sAttack(sA), sDefense(sD), speed(s), height(ht), weight(w){}

//setters
void PokemonT::SetNum(int n){
	num = n;
}

void PokemonT::SetName(string nm){
	name = nm;
}

void PokemonT::SetCategory(string c){
	category = c;
}

void PokemonT::SetTypeOne(TypeT o){
	typeOne = o;
}

void PokemonT::SetTypeTwo(TypeT t){
	typeTwo = t;
}

void PokemonT::SetHP(int h){
	hp = h;
}

void PokemonT::SetAttack(int a){
	attack = a;
}

void PokemonT::SetDefense(int d){
	defense = d;
}

void PokemonT::SetSAttack(int sA){
	sAttack = sA;
}

void PokemonT::SetSDefense(int sD){
	sDefense = sD;
}

void PokemonT::SetSpeed(int s){
	speed = s;
}

void PokemonT::SetHeight(string ht){
	height = ht;
}

void PokemonT::SetWeight(double w){
	weight = w;
}

//getters
int PokemonT::GetNum(void){
	return num;
}

string PokemonT::GetName(void){
	return name;
}

string PokemonT::GetCategory(void){
	return category;
}

TypeT PokemonT::GetTypeOne(void){
	return typeOne;
}

TypeT PokemonT::GetTypeTwo(void){
	return typeTwo;
}

int PokemonT::GetHP(void){
	return hp;
}

int PokemonT::GetAttack(void){
	return attack;
}

int PokemonT::GetDefense(void){
	return defense;
}

int PokemonT::GetSAttack(void){
	return sAttack;
}

int PokemonT::GetSDefense(void){
	return sDefense;
}

int PokemonT::GetSpeed(void){
	return speed;
}

string PokemonT::GetHeight(void){
	return height;
}

double PokemonT::GetWeight(void){
	return weight;
}