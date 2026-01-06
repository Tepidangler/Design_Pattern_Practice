//
// Created by gdmgp on 1/6/2026.
//

#ifndef PRACTICE_TRANSPORT_H
#define PRACTICE_TRANSPORT_H


class Transport
{
public:
	virtual ~Transport() = default;

	virtual bool Deliver() = 0;  
};


#endif //PRACTICE_TRANSPORT_H