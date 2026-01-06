//
// Created by gdmgp on 1/6/2026.
//

#include "Builder.h"

HouseBuilder::HouseBuilder()
{
	m_Building = new House;
}

void HouseBuilder::Reset()
{
	delete m_Building;
	m_Building = nullptr;
	m_Building = new House;
}

void HouseBuilder::BuildWindows(uint16_t NumberOfWindows)
{
	m_Building->SetNumberOfWindows(NumberOfWindows);
}

void HouseBuilder::BuildDoors(uint16_t NumberOfDoors)
{
	m_Building->SetNumberOfDoors(NumberOfDoors);
}

void HouseBuilder::BuildRooms(uint16_t NumberOfRooms)
{
	m_Building->SetNumberOfRooms(NumberOfRooms);
}

void HouseBuilder::BuildAmenities(bool HasGarage, bool HasSwimPool, bool HasStatues, bool HasGarden)
{
	m_Building->ShouldHaveGarage(HasGarage);
	m_Building->ShouldHaveSwimmingPool(HasSwimPool);
	m_Building->ShouldHaveStatues(HasStatues);
	m_Building->ShouldHaveGarage(HasGarage);
}

MallBuilder::MallBuilder()
{
	m_Building = new Mall;
}

void MallBuilder::Reset()
{
	delete m_Building;
	m_Building = nullptr;
	m_Building = new Mall;
}

void MallBuilder::BuildWindows(uint16_t NumberOfWindows)
{
	m_Building->SetNumberOfWindows(NumberOfWindows);
}

void MallBuilder::BuildDoors(uint16_t NumberOfDoors)
{
	m_Building->SetNumberOfDoors(NumberOfDoors);
}

void MallBuilder::BuildRooms(uint16_t NumberOfRooms)
{
	m_Building->SetNumberOfRooms(NumberOfRooms);
}

void MallBuilder::BuildAmenities(bool HasGarage, bool HasSwimPool, bool HasStatues, bool HasGarden)
{
	m_Building->ShouldHaveGarage(HasGarage);
	m_Building->ShouldHaveSwimmingPool(HasSwimPool);
	m_Building->ShouldHaveStatues(HasStatues);
	m_Building->ShouldHaveGarage(HasGarage);
}

GymBuilder::GymBuilder()
{
	m_Building = new Gym;
}

void GymBuilder::Reset()
{
	delete m_Building;
	m_Building = nullptr;
	m_Building = new Gym;
}

void GymBuilder::BuildWindows(uint16_t NumberOfWindows)
{
	m_Building->SetNumberOfWindows(NumberOfWindows);
}

void GymBuilder::BuildDoors(uint16_t NumberOfDoors)
{
	m_Building->SetNumberOfDoors(NumberOfDoors);
}

void GymBuilder::BuildRooms(uint16_t NumberOfRooms)
{
	m_Building->SetNumberOfRooms(NumberOfRooms);
}

void GymBuilder::BuildAmenities(bool HasGarage, bool HasSwimPool, bool HasStatues, bool HasGarden)
{
	m_Building->ShouldHaveGarage(HasGarage);
	m_Building->ShouldHaveSwimmingPool(HasSwimPool);
	m_Building->ShouldHaveStatues(HasStatues);
	m_Building->ShouldHaveGarage(HasGarage);
}
