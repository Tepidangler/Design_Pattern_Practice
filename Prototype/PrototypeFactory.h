//
// Created by gdmgp on 1/11/2026.
//

#ifndef PRACTICE_PROTOTYPEFACTORY_H
#define PRACTICE_PROTOTYPEFACTORY_H

#include <unordered_map>
#include "Prototype.h"

enum Type
{
	Concrete1,Concrete2
};

class PrototypeFactory
{
private:

	std::unordered_map<Type,Prototype*, std::hash<int>> m_Prototypes;

public:

	PrototypeFactory()
	{
		m_Prototypes[Type::Concrete1] = new ConcretePrototype(0);
		m_Prototypes[Type::Concrete2] = new ConcretePrototype2(1);
	}

	~PrototypeFactory()
	{
		delete m_Prototypes[Type::Concrete1];
		delete m_Prototypes[Type::Concrete2];
	}


	Prototype* CreatePrototype(Type type)
	{
		return m_Prototypes[type]->Clone();
	}
};


#endif //PRACTICE_PROTOTYPEFACTORY_H