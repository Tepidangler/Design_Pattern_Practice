//
// Created by gdmgp on 1/6/2026.
//

#include "Director.h"

#include <random>
static std::random_device rd;
static std::mt19937 engine(rd());
static std::uniform_int_distribution<uint16_t> distribution(1,64);

Director::Director(Builder *BuilderPtr)
{
	m_Builder = BuilderPtr;
}

void Director::Make(BuildingType Type)
{
	switch (Type)
	{
		case BuildingType::house:
		{
			uint16_t windows = distribution(engine);
			uint16_t rooms = distribution(engine);
			uint16_t doors = distribution(engine);
			bool bGarage = distribution(engine) % 2 == 0;
			bool bSwimPool = distribution(engine) % 2 == 0;
			bool bStatues = distribution(engine) % 2 == 0;
			bool bGarden = distribution(engine) % 2 == 0;

			m_Builder->BuildWindows(windows);
			m_Builder->BuildRooms(rooms);
			m_Builder->BuildDoors(doors);
			m_Builder->BuildAmenities(bGarage, bSwimPool, bStatues, bGarden);
			break;
		}
		case BuildingType::mall:
		{
			uint16_t windows = distribution(engine);
			uint16_t rooms = distribution(engine);
			uint16_t doors = distribution(engine);
			bool bGarage = distribution(engine) % 2 == 0;
			bool bSwimPool = distribution(engine) % 2 == 0;
			bool bStatues = distribution(engine) % 2 == 0;
			bool bGarden = distribution(engine) % 2 == 0;

			m_Builder->BuildWindows(windows);
			m_Builder->BuildRooms(rooms);
			m_Builder->BuildDoors(doors);
			m_Builder->BuildAmenities(bGarage, bSwimPool, bStatues, bGarden);
			break;
		}
		case BuildingType::gym:
		{
			uint16_t windows = distribution(engine);
			uint16_t rooms = distribution(engine);
			uint16_t doors = distribution(engine);
			bool bSwimPool = distribution(engine) % 2 == 0;
			bool bStatues = distribution(engine) % 2 == 0;
			bool bGarden = distribution(engine) % 2 == 0;

			m_Builder->BuildWindows(windows);
			m_Builder->BuildRooms(rooms);
			m_Builder->BuildDoors(doors);
			m_Builder->BuildAmenities(false, bSwimPool, bStatues, bGarden);
			break;
		}
		default:
		{
			fmt::println("Invalid Building type passed!");
			break;
		}
	}
}
