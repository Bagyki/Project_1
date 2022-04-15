#include<iostream>
#include<vector>
#include<string>
#include"event.cpp"

using namespace std;

class EventConverter
{
public:
    EventConverter()
    {

    }
    ~EventConverter()
    {

    }

    void convertToEvent(vector<string> v, vector<Event> &e)         /// to do: try with istringstream
    {
        e.clear();
        for (int i = 0; i < v.size(); i++)
        {
            Event event;
            convertToEvent(v[i], event);
            e.push_back(event);
        }
    }

    void convertToEvent(string data, Event &event)
    {
        int firstDelimiter = data.find("|", 0);
        string date = data.substr(0, firstDelimiter);
        int secondDelimiter = data.find("|", firstDelimiter+1);
        string time = data.substr(firstDelimiter+1, secondDelimiter-(firstDelimiter+1));
        string name = data.substr(secondDelimiter+1);
        event.setDate(date);
        event.setTime(time);
        event.setName(name);
    }


    void convertToString(vector<Event> e, vector<string> &v)
    {
        v.clear();
        for (int i = 0; i < e.size(); i++)
        {
            string data;
            convertToString(e[i], data);
            v.push_back(data);
        }
    }

    void convertToString(Event event, string &data)
    {
        data = event.getDate() + "|" + event.getTime() + "|" + event.getName();
    }

private:

};