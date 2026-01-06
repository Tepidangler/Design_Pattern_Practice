//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_MODERNCOFFEETABLE_H
#define PRACTICE_MODERNCOFFEETABLE_H
#include "CoffeeTable.h"


class ModernCoffeeTable : public CoffeeTable
{
public:
	ModernCoffeeTable()
	{
		fmt::println("Constructing a Modern Coffee Table!\n");
	}
	bool HasLegs() override
	{
		fmt::println("Modern Coffee Tables have legs!");
		return true;
	}
	void SitOn() override
	{
		fmt::println("You can sit on modern coffee tables, although you really shouldn't!");
	}
	bool HasStorage() override
	{
		fmt::println("Coffee tables in general don't have storage beyond the surface, however I don't think you'd have trouble finding a modern coffee table with drawers too!");
		return true;
	}
	void PlaceItem() override
	{
		fmt::println("Since they have storage you can place items on them!");
	}
};


#endif //PRACTICE_MODERNCOFFEETABLE_H