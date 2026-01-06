//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_DIRECTOR_H
#define PRACTICE_DIRECTOR_H
#include <cinttypes>
#include "Builder.h"
#include <fmt/format.h>

enum BuildingType : uint8_t {house, mall, gym, INVALID};

class Director
{
public:
	Director(Builder* BuilderPtr);

	~Director()
	{
	}

	void ChangeBuilder(Builder* BuilderPtr)
	{
		m_Builder = BuilderPtr;
	}

	void Make(BuildingType Type = BuildingType::INVALID);

private:
	Builder* m_Builder = nullptr;
};


#endif //PRACTICE_DIRECTOR_H