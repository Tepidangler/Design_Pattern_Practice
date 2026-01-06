//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_VICTORIANFURNITUREFACTORY_H
#define PRACTICE_VICTORIANFURNITUREFACTORY_H
#include "FurnitureFactory.h"
#include "VictorianChair.h"
#include "VictorianCoffeeTable.h"
#include "VictorianCouch.h"


class VictorianFurnitureFactory : public FurnitureFactory
{
public:

	VictorianFurnitureFactory()
	{
		fmt::println("Starting up the Victorian Furniture Factory!\n");
	}
	Chair* CreateChair() override
	{
		fmt::println("Creating a new Victorian chair now. Yes, Indeed!");
		return new VictorianChair;
	}
	CoffeeTable* CreateCoffeeTable() override
	{
		fmt::println("New Victorian coffee table coming right up!");
		return new VictorianCoffeeTable;
	}
	Couch* CreateCouch() override
	{
		fmt::println("Incoming new Victorian couch!");
		return new VictorianCouch;
	}
};


#endif //PRACTICE_VICTORIANFURNITUREFACTORY_H