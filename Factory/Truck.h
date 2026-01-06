//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_TRUCK_H
#define PRACTICE_TRUCK_H
#include <fmt/format.h>

#include "Transport.h"


class Truck : public Transport
{
public:
	Truck() = default;

	bool Deliver() override
	{
		fmt::print("Delivery located @{} via Truck was successful\n", (void*)this);
		return true;
	}
};


#endif //PRACTICE_TRUCK_H