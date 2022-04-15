#include<iostream>
#include<vector>
#include<string>
#include"human.cpp"

using namespace std;

class Women : public Human
{
public:
    Women(string name) : Human(name)            // a Women névadásakor átadjuk a nevet a Human osztálynak   // a Human miatt a Women-nek is kötelező a név adás
    {
        wdb = wdb + 1;
    }
    ~Women(){}

    string getName() const override       //function overloading
    {
        string wName;
        wName = "Mrs. " + Human::getName();    
        return wName;
    }

    
    static int getWomenDb()
    {
        return wdb;
    }

private:
    static int wdb;
};

int Women::wdb = 0;