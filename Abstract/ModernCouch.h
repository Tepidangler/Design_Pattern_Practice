//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_MODERNCOUCH_H
#define PRACTICE_MODERNCOUCH_H
#include "Couch.h"

class ModernCouch : public Couch
{
public:
	ModernCouch()
	{
		fmt::println("Constructing a Modern Couch!\n");
	}
	bool HasLegs() override
	{
		return Couch::HasLegs();
	}
	void SitOn() override
	{
		fmt::println("You can surely sit on a modern couch!");
		Couch::SitOn();
	}
	bool HasStorage() override
	{
		fmt::println("While some modern couches do have storage capacity, we'll say they don't for this exercise!");
		return false;
	}
	void PlaceItem() override
	{
		fmt::println("You are unable to place an item in storage in modern couch!");
	}
};


#endif //PRACTICE_MODERNCOUCH_H