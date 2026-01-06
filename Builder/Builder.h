//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_BUILDER_H
#define PRACTICE_BUILDER_H
#include <cinttypes>
#include "Building.h"

class Builder
{
public:
	virtual ~Builder() = default;

	virtual void Reset() = 0;
	virtual void BuildWindows(uint16_t NumberOfWindows) = 0;
	virtual void BuildDoors(uint16_t NumberOfDoors) = 0 ;
	virtual void BuildRooms(uint16_t NumberOfRooms) = 0;
	virtual void BuildAmenities(bool HasGarage, bool HasSwimPool, bool HasStatues, bool HasGarden) = 0;
	template<typename T>
	T* GetResult()
	{
		return (T*)m_Building;
	}

protected:
	Building* m_Building = nullptr;
};


class HouseBuilder : public Builder
{
public:

	HouseBuilder();
	void Reset() override;
	void BuildWindows(uint16_t NumberOfWindows) override;
	void BuildDoors(uint16_t NumberOfDoors) override;
	void BuildRooms(uint16_t NumberOfRooms) override;
	void BuildAmenities(bool HasGarage, bool HasSwimPool, bool HasStatues, bool HasGarden) override;

};

class MallBuilder : public Builder
{
public:
	MallBuilder();
	void Reset() override;
	void BuildWindows(uint16_t NumberOfWindows) override;
	void BuildDoors(uint16_t NumberOfDoors) override;
	void BuildRooms(uint16_t NumberOfRooms) override;
	void BuildAmenities(bool HasGarage, bool HasSwimPool, bool HasStatues, bool HasGarden) override;
};

class GymBuilder : public Builder
{
public:
	GymBuilder();
	void Reset() override;
	void BuildWindows(uint16_t NumberOfWindows) override;
	void BuildDoors(uint16_t NumberOfDoors) override;
	void BuildRooms(uint16_t NumberOfRooms) override;
	void BuildAmenities(bool HasGarage, bool HasSwimPool, bool HasStatues, bool HasGarden) override;
};

#endif //PRACTICE_BUILDER_H