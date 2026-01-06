//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_MODERNFURNITUREFACTORY_H
#define PRACTICE_MODERNFURNITUREFACTORY_H
#include "FurnitureFactory.h"
#include "ModernChair.h"
#include "ModernCoffeeTable.h"
#include "ModernCouch.h"


class ModernFurnitureFactory : public FurnitureFactory
{
public:

	ModernFurnitureFactory()
	{
		fmt::println("Starting up the Modern Furniture Factory!\n");
	}
	Chair* CreateChair() override
	{
		fmt::println("Creating a new Modern chair now. Yes, Indeed!");
		return new ModernChair;
	}
	CoffeeTable* CreateCoffeeTable() override
	{
		fmt::println("New Modern coffee table coming right up!");
		return new ModernCoffeeTable;
	}
	Couch* CreateCouch() override
	{
		fmt::println("Incoming new Modern couch!");
		return new ModernCouch;
	}
};


#endif //PRACTICE_MODERNFURNITUREFACTORY_H