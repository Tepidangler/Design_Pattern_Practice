//
// Created by gdmgp on 1/6/2026.
//

#include "Building.h"
#include <fmt/format.h>


void House::PrintBuildingInfo()
{
	fmt::println("Printing House Information: ");
	fmt::println("\tNumber Of Windows: {}", m_NumberOfWindows);
	fmt::println("\tNumber Of Doors: {}", m_NumberOfDoors);
	fmt::println("\tNumber Of Rooms: {}", m_NumberOfRooms);
	fmt::println("\tGarage?: {}", bHasGarage);
	fmt::println("\tSwimming Pool?: {}", bHasSwimPool);
	fmt::println("\tStatues?: {}", bHasStatues);
	fmt::println("\tGarden?: {}", bHasGarden);
	fmt::println("");


}


void Mall::PrintBuildingInfo()
{
	fmt::println("Printing Mall Information: ");
	fmt::println("\tNumber Of Windows: {}", m_NumberOfWindows);
	fmt::println("\tNumber Of Doors: {}", m_NumberOfDoors);
	fmt::println("\tNumber Of Rooms: {}", m_NumberOfRooms);
	fmt::println("\tGarage?: {}", bHasGarage);
	fmt::println("\tSwimming Pool?: {}", bHasSwimPool);
	fmt::println("\tStatues?: {}", bHasStatues);
	fmt::println("\tGarden?: {}", bHasGarden);
	fmt::println("");
}

void Gym::PrintBuildingInfo()
{
	fmt::println("Printing Gym Information: ");
	fmt::println("\tNumber Of Windows: {}", m_NumberOfWindows);
	fmt::println("\tNumber Of Doors: {}", m_NumberOfDoors);
	fmt::println("\tNumber Of Rooms: {}", m_NumberOfRooms);
	fmt::println("\tGarage?: {}", bHasGarage);
	fmt::println("\tSwimming Pool?: {}", bHasSwimPool);
	fmt::println("\tStatues?: {}", bHasStatues);
	fmt::println("\tGarden?: {}", bHasGarden);
	fmt::println("");
}

