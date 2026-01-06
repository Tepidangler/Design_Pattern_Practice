//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_VICTORIANCOFFEETABLE_H
#define PRACTICE_VICTORIANCOFFEETABLE_H
#include "CoffeeTable.h"


class VictorianCoffeeTable : public CoffeeTable
{
public:
	VictorianCoffeeTable()
	{
		fmt::println("Constructing a Victorian Coffee Table!\n");
	}
	bool HasLegs() override
	{
		fmt::println("Victorian Coffee Tables have legs!");
		return true;
	}
	void SitOn() override
	{
		fmt::println("You can sit on victorian coffee tables, although you really shouldn't!");
	}
	bool HasStorage() override
	{
		fmt::println("Coffee tables in general don't have storage beyond the surface likewise, I don't think you'd be able to find a victorian era coffee table with drawers easily!");
		return false;
	}
	void PlaceItem() override
	{
		fmt::println("Since they have a surface you can always place something on a victorian era coffee table!");
	}
};


#endif //PRACTICE_VICTORIANCOFFEETABLE_H