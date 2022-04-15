#include<iostream>
#include<string>

using namespace std;





class room
{
public:
    room(int roomNumber, int person)
    {
        m_Number = roomNumber;
        m_Free = true;
        m_Person = person;
        m_PricePerPerson = 10000;
    }
    room(int roomNumber)
    {
        m_Number = roomNumber;
        m_Free = true;
        m_Person = 2;
        m_PricePerPerson = 10000;
    }

    ~room()
    {

    }

    double getPrice()
    {
        double price = m_PricePerPerson * m_Person;
        return price;
    }

    int getNumber()
    {
        return m_Number;
    }
    
    bool isFree()
    {
        return m_Free;
    }
    void setFree(bool isFree)
    {
        m_Free = isFree;
    }
    
    int getPerson()
    {
        return m_Person;
    }
   


protected:          

    void setNumber(int roomNumber)
    {
        m_Number = roomNumber;
    }
    void setPerson(int person)
    {
        m_Person = person;
    }

    int m_Number;
    bool m_Free;
    int m_Person;
    int m_PricePerPerson;
};

class apartman:public room  //az apartman osztály megörökli a room osztály public + protected paramétereit
{
public:
    apartman(int roomNumber, int person):room(roomNumber, person)
    {
        m_PricePerPerson = 20000;
    }
    apartman(int roomNumber):room(roomNumber)
    {
        m_PricePerPerson = 20000;
    }

    ~apartman()
    {

    }
};

class standardRoom:public room
{
public:
    standardRoom(int roomNumber, int person):room(roomNumber, person)
    {
        m_PricePerPerson = 5000;
    }
    standardRoom(int roomNumber):room(roomNumber)
    {
        m_PricePerPerson = 5000;
    }

    ~standardRoom()
    {

    }
};