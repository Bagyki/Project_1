#ifndef EVENT_CPP
#define EVENT_CPP


#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Event
{
public:
    Event()
    {
        m_Date = "";
        m_Time = "";
        m_Name = "";
    }
    ~Event()
    {

    }

    string getDate()
    {
        return m_Date;
    }
    void setDate(string date) 
    {
        m_Date = date;
    }
    
    string getTime()
    {
        return m_Time;
    }
    void setTime(string time) 
    {
        m_Time = time;
    }
    
    string getName()
    {
        return m_Name;
    }
    void setName(string name) 
    {
        m_Name = name;
    }


    string showEvent()
    {
        return this->getDate() + ", " + this->getTime() + ": " + this->getName();

        // cout << m_Date + ", " + m_Time + ": " + m_Name << endl;   // ez is jó lehetne
    }

    

private:
    string m_Date;
    string m_Time;
    string m_Name;
};



#endif