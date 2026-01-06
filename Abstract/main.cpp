//
// Created by gdmgp on 1/6/2026.
//

#include "ModernFurnitureFactory.h"
#include "VictorianFurnitureFactory.h"

int main(int argc, char** argv)
{
	FurnitureFactory* Factory1 = new ModernFurnitureFactory;
	Chair* Chair1 = Factory1->CreateChair();
	CoffeeTable* CoffeeTable1 = Factory1->CreateCoffeeTable();
	Couch* Couch1 = Factory1->CreateCouch();
	FurnitureFactory* Factory2  = new VictorianFurnitureFactory;
	Chair* Chair2 = Factory2->CreateChair();
	CoffeeTable* CoffeeTable2 = Factory2->CreateCoffeeTable();
	Couch* Couch2 = Factory2->CreateCouch();

	if(Chair1->HasLegs())
	{
		Chair1->SitOn();
	}
	fmt::println("");
	if(Chair1->HasStorage())
	{
		Chair1->PlaceItem();
	}
	fmt::println("");
	if(CoffeeTable1->HasLegs())
	{
		CoffeeTable1->SitOn();
	}
	fmt::println("");
	if(CoffeeTable1->HasStorage())
	{
		CoffeeTable1->PlaceItem();
	}
	fmt::println("");
	if(Couch2->HasLegs())
	{
		Couch2->SitOn();
	}
	fmt::println("");
	if(Couch2->HasStorage())
	{
		Couch2->PlaceItem();
	}
	fmt::println("");
	if(Chair2->HasLegs())
	{
		Chair2->SitOn();
	}
	fmt::println("");
	if(Chair2->HasStorage())
	{
		Chair2->PlaceItem();
	}
	fmt::println("");
	if(CoffeeTable2->HasLegs())
	{
		CoffeeTable2->SitOn();
	}
	fmt::println("");
	if(CoffeeTable2->HasStorage())
	{
		CoffeeTable2->PlaceItem();
	}
	fmt::println("");

	if(Couch2->HasLegs())
	{
		Couch2->SitOn();
	}
	fmt::println("");
	if(Couch2->HasStorage())
	{
		Couch2->PlaceItem();
	}

	delete Factory1;
	delete Chair1;
	delete CoffeeTable1;
	delete Couch1;
	delete Factory2;
	delete Chair2;
	delete CoffeeTable2;
	delete Couch2;

}
