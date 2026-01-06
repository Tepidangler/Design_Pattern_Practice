//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_SHIP_H
#define PRACTICE_SHIP_H
#include "Transport.h"

class Ship : public Transport
{
public:
	Ship() = default;

	bool Deliver() override
	{
		fmt::print("Delivery located @{} via Ship was successful\n", (void*)this);
		return true;
	}
};


#endif //PRACTICE_SHIP_H