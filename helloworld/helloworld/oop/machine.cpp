#ifndef MACHINE_CPP
#define MACHINE_CPP

#include<iostream>
#include<vector>
#include<string>
#include"human.cpp"

using namespace std;


class Machine
{
public:
    Machine(int prize)
    {
        m_prize = prize;
    }
    ~Machine(){}

    int getPrize() const
    {
        return m_prize;
    }

private:
    int m_prize;

};

// a létrehozó függvény tudjon Robot-ot is létrehozni, betölteni a company-ba
// a Robot név kiírásakor: név_Robot


class Robot : public Machine, public Human
{
public:
    Robot(string name, int prize) : Human(name), Machine(prize)
    {
        rdb = rdb + 1;
    }
    ~Robot(){}

    string getName() const override       //function overloading
    {
        string rName;
        rName = Human::getName() + "_Robot " + to_string(getPrize());    
        return rName;
    }

    static int rdb;
    static int getRobotDb()
    {
        return rdb;
    }

private:

};

int Robot::rdb = 0;

#endif