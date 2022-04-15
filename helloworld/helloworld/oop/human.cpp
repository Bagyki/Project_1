#ifndef HUMAN_CPP
#define HUMAN_CPP

#include<iostream>
#include<vector>
#include<string>

using namespace std;


class Human
{
public:
    Human(string name)    // létrehozáskor már elnevezzük, és mindenképp el is kell nevezni! (ha ez így szerepel itt)
    {
        m_Name = name;
    }
    ~Human(){}

    void setName(string name)
    {
        m_Name = name;
    }
    virtual string getName() const
    {
        return m_Name;
    }
    
    void setAge(int age)
    {
        m_Age = age;
    }
    int getAge() 
    {
        return m_Age;
    }

private:
    string m_Name;
    int m_Age;
};

#endif