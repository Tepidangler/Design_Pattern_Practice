//
// Created by gdmgp on 1/6/2026.
//

#include "Builder.h"
#include "Director.h"

int main(int argc, char** argv)
{
	HouseBuilder* builder = new HouseBuilder;
	Director* director = new Director(builder);
	director->Make(BuildingType::house);
	House* building1 = builder->GetResult<House>();
	building1->PrintBuildingInfo();

	MallBuilder* builder2 = new MallBuilder;
	director->ChangeBuilder(builder2);
	director->Make(BuildingType::mall);
	Mall* building2 = builder2->GetResult<Mall>();
	building2->PrintBuildingInfo();

	GymBuilder* builder3 = new GymBuilder;
	director->ChangeBuilder(builder3);
	director->Make(BuildingType::gym);
	Gym* building3 = builder3->GetResult<Gym>();
	building3->PrintBuildingInfo();

	delete builder;
	delete builder2;
	delete builder3;
	delete director;
	delete building1;
	delete building2;
	delete building3;
}
