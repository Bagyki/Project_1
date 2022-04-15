#include<iostream>
#include<vector>
#include<string>
#include"filehandler.cpp"
#include"eventconverter.cpp"
#include"event.cpp"

using namespace std;

enum modification
{
    ADD,
    MODIFY,
    DELETE
};

enum eventData
{
    DATE, 
    TIME,
    NAME
};

void showData(Event event, eventData a);

void showEvent(const vector<Event> &e);

bool askForModification();

modification selectModification();

void addEvent(vector<Event> &e);

void modifyEvent(vector<Event> &e);

void deleteEvent(vector<Event> &e);

bool isIndex(string s, int maxindex);

//bool checkEvent(vector<Event> e, int a);





int main()
{
    vector<string> v;
    
    FileHandler handler;

    EventConverter ec;

    vector<Event> e;

///////  Load data from file   ////////
    handler.load(v);

    ec.convertToEvent(v, e);
//////////////////////////////////////////

////////    Process data  //////////
    
    bool modify = true;
    do   
    {
        showEvent(e);
        modify = askForModification();
        if (modify == true)
        {
            modification ans = selectModification();   
        
            if (ans == ADD)
            {
                addEvent(e);
            }
            if (ans == MODIFY)
            {
                modifyEvent(e);
            }
            if (ans == DELETE)
            {
                deleteEvent(e);
            }
        }
    }
    while (modify == true);

    

//////////////////////////////////////////

/////////    Save data back to file   /////////////    
    ec.convertToString(e, v);

    handler.save(v);
//////////////////////////////////////////


}
/*
void showEvent(vector<Event> e)
{
    for (int i = 0; i < e.size(); i++)
    {
        cout << e[i].getDate() + ", " + e[i].getTime() + ": " + e[i].getName() << endl;
    }
}
*/

void showData(Event event, eventData a)
{
    if (a == DATE)
    {
        cout << event.getDate() << endl;
    }
    if (a == TIME)
    {
        cout << event.getTime() << endl;
    }
    if (a == NAME)
    {
        cout << event.getName() << endl;
    }

}

void showEvent(const vector<Event> &e)
{
    for (int i = 0; i < e.size(); i++)
    {
        cout << i+1 << ".  " << e[i].showEvent() << endl;
    }
}


bool askForModification()
{
    string answer;
    do
    {
        const string kerdes = "Akarsz modositani?";
        cout << kerdes << endl;
        cin >> answer;
    }
    while (answer != "i" && answer != "n");

    if (answer == "i")
    {
        return true;
    }
    else 
    {
        return false;
    }
}

modification selectModification()
{
    string ans;
    do
    {
        cout << "Mit szeretnel tenni?" << endl << "1. Hozzaadni?" << endl << "2. Modositani?" << endl << "3. Torolni?" << endl;
        cin >> ans;
    }
    while (ans != "1" && ans != "2" && ans != "3");

    modification mod;
    
    if (ans == "1")
    {
        mod = ADD;
    }
    if (ans == "2")
    {
        mod = MODIFY;
    }
    if (ans == "3")
    {
        mod = DELETE;
    }

    return mod;         
}

void addEvent(vector<Event> &e)
{
    Event event;
    string answer;
    cout << "Add meg a datumot!" << endl;
    cin >> answer;
    event.setDate(answer);
    cout << "Add meg a idopontot!" << endl;
    cin >> answer;
    event.setTime(answer);
    cout << "Add meg az esemeny nevet!" << endl;
    cin >> answer;
    event.setName(answer);
    e.push_back(event);
}

void modifyEvent(vector<Event> &e)
{
    if (e.size() > 0)
    {
        int answ;               
        string answer;
        do
        {
            showEvent(e);
            cout << "Melyik esemenyt szeretned modositani?" << endl;
            cin >> answ;

        }
        while (answ <= 0 || answ > e.size());
    
        cout << "Add meg a datumot!" << endl;
        cin >> answer;
        e[answ-1].setDate(answer);
        cout << "Add meg a idopontot!" << endl;
        cin >> answer;
        e[answ-1].setTime(answer);
        cout << "Add meg az esemeny nevet!" << endl;
        cin >> answer;
        e[answ-1].setName(answer);
    }
    else
    {
        cout << "Nincs esemeny!" << endl;
    }
}

void deleteEvent(vector<Event> &e)
{
    if (e.size() > 0)
    {
        int answ = 0;     
        do
        {
            showEvent(e);
            cout << "Melyik esemenyt szeretned torolni?" << endl;
            cin >> answ;
        }
        while (answ <= 0 || answ > e.size());
   
        e.erase(e.begin() + answ-1);
    }
    else
    {
        cout << "Nincs esemeny!" << endl;
    }

}

bool isIndex(string s, int maxindex)
{
    
    
    
    
    
    return true;
}










/*
bool checkEvent(vector<Event> e, int a)
{
    int i = 0;
    bool eredmeny = true;

    while (i < e.size() && a != e[i])
    {
        i++;
    }

    if (i < e.size())
    {
        eredmeny = true;
    }
    else
    {
        eredmeny = false;
    }
    return eredmeny;
}
*/



