//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_ROADLOGSITICS_H
#define PRACTICE_ROADLOGSITICS_H
#include "Logistics.h"
#include <fmt/format.h>

#include "Truck.h"

class RoadLogistics : public Logistics
{
public:

	RoadLogistics() = default;
	virtual ~RoadLogistics()
	{
		delete m_Transport;
	}

	void PlanDelivery() override
	{
		fmt::print("Planning Delivery via Truck!\n");
		m_Transport = CreateTransport();
	}
	Transport* CreateTransport() override
	{
		return new Truck;
	}
};


#endif //PRACTICE_ROADLOGSITICS_H