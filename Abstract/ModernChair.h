//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_MODERNCHAIR_H
#define PRACTICE_MODERNCHAIR_H
#include "Chair.h"


class ModernChair : public Chair
{
public:
	ModernChair()
	{
		fmt::println("Constructing a Modern Chair!\n");
	}
	bool HasLegs() override
	{
		fmt::println("Modern chairs have legs as well!");
		return Chair::HasLegs();
	}
	void SitOn() override
	{
		Chair::SitOn();
		fmt::println("Although they may be a bit more fragile, you can still sit on modern chairs!");
	}
	bool HasStorage() override
	{
		fmt::println("Modern chairs might have some storage element on them!");
		return true;
	}
	void PlaceItem() override
	{
		fmt::println("We'll assume this chair has storage and thus you've successfully placed an item in storage!");
	}
};


#endif //PRACTICE_MODERNCHAIR_H