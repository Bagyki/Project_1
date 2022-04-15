#include<iostream>
#include<vector>
#include<string>

using namespace std;


class kor
{
public:  
    kor(double sugar)
    {
        m_sugar = sugar;
        db = db+1;
    }
    ~kor()
    {
        db = db-1;
    }
    
    double getSugar()
    {
        return m_sugar;
    }
    
    double getTerulet()
    {
        double terulet = 0;
        terulet = m_sugar * m_sugar * getPi();
        return terulet;
    }
    static double getPi()           // a member változó nem használható!
    {
        return 3.14;
    }
    
    static int db;

    static int getDb()
    {
        return db;
    }

private:
    double m_sugar;
};

int kor::db = 0;

int main()
{

    
    kor A(10);

    cout << "A Pi erteke: " << kor::getPi() << endl;

    cout << "A kor sugara: " << A.getSugar() << endl;

    cout << "A kor terulete: " << A.getTerulet() << endl;
 
    cout << "A korok szama: " << kor::getDb() << endl;

    kor B(20), C(12), D(8);

    cout << "A korok szama: " << kor::getDb() << endl;

    kor::db = 15;

    cout << "A korok szama: " << kor::getDb() << endl;

}