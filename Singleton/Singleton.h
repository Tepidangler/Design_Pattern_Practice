//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_SINGLETON_H
#define PRACTICE_SINGLETON_H
#include <fmt/format.h>

class Singleton
{
public:
	static Singleton* Get()
	{
		static Singleton* Instance;
		if(!Instance)
		{
			Instance  = new Singleton;
		}
		return Instance;
	}

	void PrintAddress()
	{
		fmt::println("Singleton Addr: {}", (void*)this);
	}
};


#endif //PRACTICE_SINGLETON_H