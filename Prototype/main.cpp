//
// Created by gdmgp on 1/10/2026.
//
#include "Prototype.h"
#include "PrototypeFactory.h"

int main(int argc, char** argv)
{
	PrototypeFactory* ProtoFact = new PrototypeFactory;

	Prototype* Prop1 = ProtoFact->CreatePrototype(Type::Concrete1);
	Prop1->Print();
	Prototype* Prop2 = ProtoFact->CreatePrototype(Type::Concrete2);
	Prop2->Print();
	Prototype* Prop3 = ProtoFact->CreatePrototype(Type::Concrete2);
	Prop3->Print();

	delete ProtoFact;
	delete Prop1;
	delete Prop2;

	return 0;
}