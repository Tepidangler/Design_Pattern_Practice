//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_VICTORIANCOUCH_H
#define PRACTICE_VICTORIANCOUCH_H
#include "Couch.h"


class VictorianCouch : public Couch
{
public:
	VictorianCouch()
	{
		fmt::println("Constructing a Victorian Chair!\n");
	}
	bool HasLegs() override
	{
		return Couch::HasLegs();
	}
	void SitOn() override
	{
		fmt::println("You can surely sit on a victorian couch!");
	}
	bool HasStorage() override
	{
		fmt::println("Victorian couches to my knowledge have never been able to store things!");
		return false;
	}
	void PlaceItem() override
	{
		fmt::println("You aren't able to store things in a victorian era couch!");
	}
};


#endif //PRACTICE_VICTORIANCOUCH_H