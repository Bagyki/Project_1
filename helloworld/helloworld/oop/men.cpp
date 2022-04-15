#include<iostream>
#include<vector>
#include<string>
#include"human.cpp"

using namespace std;

class Men : public Human
{
public:
    Men(string name) : Human(name)
    {
        mdb = mdb + 1;
    }
    ~Men(){}

    string getName() const override       //function overloading
    {
        string mName;
        mName = "Mr. " + Human::getName();    
        return mName;
    }

    static int mdb;
    static int getMenDb()
    {
        return mdb;
    }

private:
    
};

int Men::mdb = 0;

