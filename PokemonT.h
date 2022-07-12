/**
*Lucas Waldrop
*PokemonT v0.2
*07.10.22
**/

#pragma once

//headers
#include <string>
#include "TypeT.h"

//class
class PokemonT{
	private:
		int num;
		std::string name;
		std::string category;
		TypeT typeOne, typeTwo;
		int hp, attack, defense, sAttack, sDefense, speed;
		std::string height;
		double weight;

	public:
		//default ctor
		PokemonT(void);
		//param ctor
		PokemonT(int n, std::string nm, std::string c, TypeT o, TypeT t, int h, int a, int d, int sA, int sD, int s, std::string ht, double w);

		//setters
		void SetNum(int n);
		void SetName(std::string nm);
		void SetCategory(std::string c);
		void SetTypeOne(TypeT o);
		void SetTypeTwo(TypeT t);
		void SetBothTypes(TypeT o, TypeT t);
		void SetHP(int h);
		void SetAttack(int a);
		void SetDefense(int d);
		void SetSAttack(int sA);
		void SetSDefense(int sD);
		void SetSpeed(int s);
		void SetHeight(std::string ht);
		void SetWeight(double w);

		//getters
		int GetNum(void);
		std::string GetName(void);
		std::string GetCategory(void);
		TypeT GetTypeOne(void);
		TypeT GetTypeTwo(void);
		int GetHP(void);
		int GetAttack(void);
		int GetDefense(void);
		int GetSAttack(void);
		int GetSDefense(void);
		int GetSpeed(void);
		std::string GetHeight(void);
		double GetWeight(void);
};