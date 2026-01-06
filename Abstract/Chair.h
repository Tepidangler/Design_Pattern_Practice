//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_CHAIR_H
#define PRACTICE_CHAIR_H
#include <fmt/format.h>

class Chair
{
public:
	virtual bool HasLegs()
	{
		fmt::println("Chairs have legs!");
		return true;
	}
	virtual void SitOn()
	{
		fmt::println("You can sit on chairs!");
	}
	virtual bool HasStorage() = 0;
	virtual void PlaceItem() = 0;
};


#endif //PRACTICE_CHAIR_H