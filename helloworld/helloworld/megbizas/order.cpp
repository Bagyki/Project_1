#ifndef ORDER_CPP
#define ORDER_CPP

#include<iostream>
#include<vector>
#include<string>

using namespace std;

enum Truck
{
    UNKNOWNTRUCK = 0,
    VAN = 1,
    TRUCK = 2
};
enum Land
{
    UNKNOWNLAND = 0,
    DOMESTIC = 1,
    INTERNATIONAL = 2
};




class Order
{
public:
    Order()
    {
        m_Orderer = "";
        m_Distance = 0;
        m_Truck = UNKNOWNTRUCK;
        m_Land = UNKNOWNLAND;
    }
    Order(string orderer, double distance, int truck, int land)
    {
        m_Orderer = orderer;
        m_Distance = distance;
        setTruck(truck);
        setLand(land);
    }
    ~Order()
    {
    }

    static const double domVanCost;         
    static const double intVanCost;
    static const double domTruCost;
    static const double intTruCost;

    void setOrderer(string orderer)
    {
        m_Orderer = orderer;
    }
    string getOrderer() const
    {
        return m_Orderer;
    }
    
    void setDistance(double distance)
    {
        m_Distance = distance;
    }
    double getDistance() const
    {
        return m_Distance;
    }
    
    double getCost() const
    {
        double cost = 0;
    
        if (getTruck() == VAN)
        {
            if (getLand() == DOMESTIC)
            {
                cost = (getDistance()) * domVanCost;
            }
            if (getLand() == INTERNATIONAL)
            {
                cost = (getDistance()) * intVanCost;
            }
        }
        if (getTruck() == TRUCK)
        {
            if (getLand() == DOMESTIC)
            {
                cost = (getDistance()) * domTruCost;
            }
            if (getLand() == INTERNATIONAL)
            {
                cost = (getDistance()) * intTruCost;
            }
        }
        return cost;
    }
 
    void setTruck(int a)
    {
        if (a == 1)
        {
            m_Truck = VAN;
        }
        if (a == 2)
        {
            m_Truck = TRUCK;
        }
    }
    Truck getTruck() const
    {
        return m_Truck;
    }
    
    void setLand(int b) 
    {
        if (b == 1)
        {
            m_Land = DOMESTIC;
        }
        if (b == 2)
        {
            m_Land = INTERNATIONAL;
        }
    }
    Land getLand() const 
    {
        return m_Land;
    }
   
    string showOrder() const
    {
        string ord = getOrderer() + ", " + to_string(getDistance()) + ", " + to_string(getCost());  
        return ord;
    }   



private:
    string m_Orderer;
    double m_Distance;
    Truck m_Truck;
    Land m_Land;
    
};

double const Order::domVanCost = 0.50;         
double const Order::intVanCost = 0.60;
double const Order::domTruCost = 1.00;
double const Order::intTruCost = 1.20;


#endif