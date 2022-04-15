#include<iostream>
#include<vector>
#include<string>
#include"human.cpp"

using namespace std;


class Company
{
public:
    Company(){}
    ~Company()
    {
        deleteCollagues();
    }

    void addCollague(Human* h)
    {
        m_Collagues.push_back(h);
    }
    
    const vector<Human*>& getCollagues() const
    {
        return m_Collagues;
    }

    void deleteCollagues()
    {
        for (int i = 0; i < m_Collagues.size(); i++)
        {
            delete m_Collagues[i];
            m_Collagues[i] = 0;
        }
        m_Collagues.clear();
    }

private:
    vector<Human*> m_Collagues;
};