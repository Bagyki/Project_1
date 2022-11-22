#ifndef ACCOUNTCONVERTER_H
#define ACCOUNTCONVERTER_H


#include <string>

using namespace std;


class AccountConverter
{
public:
    AccountConverter() {}
    ~AccountConverter() {}

    static const string delimeter;


private:

};


string const AccountConverter::delimeter = "||";

#endif

   
/////////////////////////////////////////////////////////////
   
/*

    void convertToEvent(vector<string> v, vector<Event>& e)         /// to do: try with istringstream
    {
        e.clear();
        for (int i = 0; i < v.size(); i++)
        {
            Event event;
            convertToEvent(v[i], event);
            e.push_back(event);
        }
    }

    void convertToEvent(string data, Event& event)
    {
        int firstDelimiter = data.find("|", 0);
        string date = data.substr(0, firstDelimiter);
        int secondDelimiter = data.find("|", firstDelimiter + 1);
        string time = data.substr(firstDelimiter + 1, secondDelimiter - (firstDelimiter + 1));
        string name = data.substr(secondDelimiter + 1);
        event.setDate(date);
        event.setTime(time);
        event.setName(name);
    }


    void convertToString(vector<Event> e, vector<string>& v)
    {
        v.clear();
        for (int i = 0; i < e.size(); i++)
        {
            string data;
            convertToString(e[i], data);
            v.push_back(data);
        }
    }

    void convertToString(Event event, string& data)
    {
        data = event.getDate() + "|" + event.getTime() + "|" + event.getName();
    }




///////////////////////////////////////


    static void convertToOrder(const vector<string>& s, vector<Order*>& v)
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
        int secondDelimiter = data.find(delimeter, firstDelimiter + delimeter.size());    //delimeter.size() betöltése egy változóba
        string distance = data.substr(firstDelimiter + delimeter.size(), secondDelimiter - (firstDelimiter + delimeter.size()));
        int thirdDelimiter = data.find(delimeter, secondDelimiter + delimeter.size());
        string land = data.substr(secondDelimiter + delimeter.size(), thirdDelimiter - (secondDelimiter + delimeter.size()));
        string truck = data.substr(thirdDelimiter + delimeter.size());

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

    static void convertToString(const vector<Order*>& v, vector<string>& s)
    {
        s.clear();
        for (int i = 0; i < v.size(); i++)
        {
            string data;
            convertToString(v[i], data);
            s.push_back(data);
        }
    }

    static void convertToString(const Order* pOrder, string& data)
    {
        data = pOrder->getOrderer() + delimeter + to_string(pOrder->getDistance()) + delimeter + to_string(pOrder->getLand()) + delimeter + to_string(pOrder->getTruck());
    }


    */