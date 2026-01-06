//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_FURNITUREFACTORY_H
#define PRACTICE_FURNITUREFACTORY_H
#include "Chair.h"
#include "CoffeeTable.h"
#include "Couch.h"
#include <fmt/format.h>


class FurnitureFactory
{
public:

	virtual Chair* CreateChair() = 0;
	virtual CoffeeTable* CreateCoffeeTable() = 0;
	virtual Couch* CreateCouch() = 0;
};


#endif //PRACTICE_FURNITUREFACTORY_H