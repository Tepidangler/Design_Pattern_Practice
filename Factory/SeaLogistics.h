//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_SEALOGISTICS_H
#define PRACTICE_SEALOGISTICS_H
#include "Logistics.h"
#include <fmt/format.h>

#include "Ship.h"

class SeaLogistics : public Logistics
{
public:

	SeaLogistics() = default;
	virtual ~SeaLogistics()
	{
		delete m_Transport;
	}

	void PlanDelivery() override
	{
		fmt::print("Planning Delivery via Ship!\n");
		m_Transport = CreateTransport();
	}

	Transport* CreateTransport() override
	{
		return new Ship;
	}

};


#endif //PRACTICE_SEALOGISTICS_H