#include<iostream>
#include<vector>
#include<string>
#include"order.cpp"
#include<stdlib.h>

using namespace std;


class Converter
{
public:
    Converter()
    {
    }
    ~Converter()
    {
    }
    
    static const string delimeter;


    static void convertToOrder(const vector<string> &s, vector<Order*> &v)         
    {
        v.clear();
        for (int i = 0; i < s.size(); i++)
        {
            Order* pOrder = 0;
            //pOrder = new Order;   // ezt átraktuk a lenti függvénybe
            convertToOrder(s[i], pOrder);
            v.push_back(pOrder);
        }
    }

    static void convertToOrder(const string data, Order* pOrder)
    {
        int firstDelimiter = data.find(delimeter, 0);
        string orderer = data.substr(0, firstDelimiter);
        int secondDelimiter = data.find(delimeter, firstDelimiter+delimeter.size());    //delimeter.size() betöltése egy változóba
        string distance = data.substr(firstDelimiter+delimeter.size(), secondDelimiter-(firstDelimiter+delimeter.size()));
        int thirdDelimiter = data.find(delimeter, secondDelimiter+delimeter.size());
        string land = data.substr(secondDelimiter+delimeter.size(), thirdDelimiter-(secondDelimiter+delimeter.size()));
        string truck = data.substr(thirdDelimiter+delimeter.size());
        
        //megvizsgálni, hogy nem-e NULL pointer!!!
        
        double value = stringToDouble(distance);
        int l = stringToInteger(land);  
        int t = stringToInteger(truck);

        pOrder = new Order(orderer, value, t, l);

    }
    
    static double stringToDouble(string word)   //ez és a kövi mehetne PRIVATE-ba
    {
        double value = atof(word.c_str());
        return value;

    }

    static int stringToInteger(string word)
    {
        int value = stoi(word);
        return value;
    }

    static void convertToString(const vector<Order*> &v, vector<string> &s) 
    {
        s.clear();
        for (int i = 0; i < v.size(); i++)
        {
            string data;
            convertToString(v[i], data);
            s.push_back(data);
        }
    }

    static void convertToString(const Order* pOrder, string &data)
    {
        data = pOrder->getOrderer() + delimeter + to_string(pOrder->getDistance()) + delimeter + to_string(pOrder->getLand()) + delimeter + to_string(pOrder->getTruck());
    }

private:


};

string const Converter::delimeter = "||";