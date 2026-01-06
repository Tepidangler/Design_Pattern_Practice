//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_COUCH_H
#define PRACTICE_COUCH_H
#include <fmt/format.h>

class Couch
{
public:
	virtual bool HasLegs()
{
	fmt::println("Couches typically don't have legs, but they do have feet!");
	return false;
}
	virtual void SitOn()
{
	fmt::println("You can sit on couches!");
}
	virtual bool HasStorage() = 0;
	virtual void PlaceItem() = 0;
};


#endif //PRACTICE_COUCH_H