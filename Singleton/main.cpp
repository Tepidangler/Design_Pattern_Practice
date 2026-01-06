#include "Singleton.h"

int main()
{

	fmt::println("Singleton Implementation:");
	Singleton* instance = Singleton::Get();

	instance->PrintAddress();

	Singleton* instance2 = Singleton::Get();

	instance2->PrintAddress();

}