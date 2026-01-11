//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_BUILDING_H
#define PRACTICE_BUILDING_H
#include <stdint.h>


class Building
{
public:
	void SetNumberOfWindows(uint16_t NumberOfWindows)
	{
		m_NumberOfWindows = NumberOfWindows;
	}
	void SetNumberOfDoors(uint16_t NumberOfDoors)
	{
		m_NumberOfDoors = NumberOfDoors;
	}
	void SetNumberOfRooms(uint16_t NumberOfRooms)
	{
		m_NumberOfRooms = NumberOfRooms;
	}
	void ShouldHaveGarage(bool ShouldHaveGarage)
	{
		bHasGarage = ShouldHaveGarage;
	}
	void ShouldHaveSwimmingPool(bool ShouldHaveSwimmingPool)
	{
		bHasSwimPool = ShouldHaveSwimmingPool;
	}
	void ShouldHaveStatues(bool ShouldHaveStatues)
	{
		bHasStatues = ShouldHaveStatues;
	}
	void ShouldHaveGarden(bool ShouldHaveGarden)
	{
		bHasGarden = ShouldHaveGarden;
	}
protected:
	uint16_t m_NumberOfWindows = 0;
	uint16_t m_NumberOfDoors = 0;
	uint16_t m_NumberOfRooms = 0;
	bool bHasGarage = false;
	bool bHasSwimPool = false;
	bool bHasStatues = false;
	bool bHasGarden = false;
};

class House : public Building
{
public:

	House() = default;
	~House() = default;
	void PrintBuildingInfo();
};
class Mall : public Building
{
public:

	Mall() = default;
	~Mall() = default;
	void PrintBuildingInfo();
};
class Gym : public Building
{
public:

	Gym() = default;
	~Gym() = default;
	void PrintBuildingInfo();
};

#endif //PRACTICE_BUILDING_H