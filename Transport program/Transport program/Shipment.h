#ifndef SHIPMENT_H
#define SHIPMENT_H

#include "Address.h"
#include "Goods.h"
#include "Company.h"




class Shipment
{
public:
	Shipment()
	{
		m_LoadingPlace = 0;
		m_UnloadingPlace = 0;
		m_Goods = 0;
		m_Forwarder = 0;
	}
	~Shipment()
	{
	}



private:
	Address* m_LoadingPlace;
	Address* m_UnloadingPlace;
	Goods* m_Goods;
	Company* m_Forwarder;
};

#endif