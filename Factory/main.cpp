//
// Created by gdmgp on 1/6/2026.
//
#include "RoadLogistics.h"
#include "SeaLogistics.h"

int main(int argc, char** argv)
{
	fmt::println("Factory Implementation:");

	Logistics* Road = new RoadLogistics;

	Logistics* Sea = new SeaLogistics;

	Road->PlanDelivery();

	Sea->PlanDelivery();

	Sea->m_Transport->Deliver();
	Road->m_Transport->Deliver();

	delete Road;
	delete Sea;
}