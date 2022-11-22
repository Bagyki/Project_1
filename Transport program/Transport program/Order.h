#ifndef ORDER_H
#define ORDER_H

#include "Company.h"
#include "Shipment.h"

#include <vector>



class Order
{
public:
	Order()
	{
		positionNumber = positionNumber + 1;
		m_Orderer = 0;
	}
	~Order()
	{
	}

	static int positionNumber;

private:
	Company* m_Orderer;
	vector<Shipment*> m_Shipments;

};

#endif