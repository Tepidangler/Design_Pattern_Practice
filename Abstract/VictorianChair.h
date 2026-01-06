//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_VICTORIANCHAIR_H
#define PRACTICE_VICTORIANCHAIR_H
#include "Chair.h"



class VictorianChair : public Chair
{
public:
	VictorianChair()
	{
		fmt::println("Constructing a Victorian Chair!\n");
	}
	bool HasLegs() override
	{
		fmt::println("Victorian chairs have legs as well!");
		return Chair::HasLegs();
	}
	void SitOn() override
	{
		Chair::SitOn();
		fmt::println("Because they are typically so sturdy you can sit on Victorian era chairs!");
	}
	bool HasStorage() override
	{
		fmt::println("Victorian era chairs generally don't have any storage");
		return false;
	}
	void PlaceItem() override
	{
		fmt::println("Since this chair doesn't have storage you weren't able to place an item!");
	}
};


#endif //PRACTICE_VICTORIANCHAIR_H