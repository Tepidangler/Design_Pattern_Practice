//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_LOGISTICS_H
#define PRACTICE_LOGISTICS_H
#include "Transport.h"


class Logistics
{
public:

	~Logistics()
	{
		delete m_Transport;
	}
	virtual void PlanDelivery() = 0;
	virtual Transport* CreateTransport() = 0;

	Transport* m_Transport = nullptr;
};


#endif //PRACTICE_LOGISTICS_H