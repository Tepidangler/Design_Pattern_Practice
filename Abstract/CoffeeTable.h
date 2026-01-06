//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_COFFEETABLE_H
#define PRACTICE_COFFEETABLE_H

#include <fmt/format.h>

class CoffeeTable
{
public:
	virtual bool HasLegs() = 0;
	virtual void SitOn() = 0;
	virtual bool HasStorage() = 0;
	virtual void PlaceItem() = 0;
};


#endif //PRACTICE_COFFEETABLE_H