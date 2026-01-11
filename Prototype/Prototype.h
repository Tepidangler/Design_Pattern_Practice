//
// Created by gdmgp on 1/11/2026.
//

#ifndef PRACTICE_PROTOTYPE_H
#define PRACTICE_PROTOTYPE_H
#include <fmt/format.h>
#include <cstdlib>
#include <string>


class Prototype
{
public:
	Prototype(const std::string& Name)
	:m_Field2(Name) {}

	virtual ~Prototype() = default;

	virtual Prototype* Clone() = 0;

	virtual void Print()
	{
		fmt::println("Calling Print() from {} with an ID Type of {}",m_Field2, m_Field1);
	}

protected:
	uint32_t m_Field1 = 32;
	std::string m_Field2 = "Name";
};

class ConcretePrototype : public Prototype
{
public:
	ConcretePrototype(uint32_t ID)
	:Prototype("Concrete Prototype 1") {m_ID = ID++;m_Field1 = m_ID;}

	~ConcretePrototype() = default;

	Prototype* Clone() override
	{
		return new ConcretePrototype(m_ID);
	}

private:
	uint32_t m_ID = 0;
};

class ConcretePrototype2 : public Prototype
{
public:
	ConcretePrototype2(uint32_t ID)
	:Prototype("Concrete Prototype 2") {m_ID = ID++; m_Field1 = m_ID;}

	~ConcretePrototype2() = default;

	Prototype* Clone() override
	{
		return new ConcretePrototype2(m_ID);
	}

private:
	uint32_t m_ID = 0;
};


#endif //PRACTICE_PROTOTYPE_H