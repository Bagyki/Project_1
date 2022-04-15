#include<iostream>
#include<vector>
#include<string>
#include"human.cpp"
#include"women.cpp"
#include"men.cpp"
#include"company.cpp"
#include"machine.cpp"

using namespace std;


void askForFivePeople(vector<Human*> &v);

void showGroup(const vector<Human*> &v);

void deleteGroup(vector<Human*> &v);

void printOut(const Human* h);

Human* askForPeople();

void checkCollague();




int main()
{
    Company comp;

    for (int i = 0; i < 5; i++)
    {
        Human* collague = askForPeople();

        comp.addCollague(collague);
    }

    //Robot* robi = new Robot("Robi", 100);

    //comp.addCollague(robi);
    
    showGroup(comp.getCollagues());

    checkCollague();

    comp.deleteCollagues();


    
}

void deleteGroup(vector<Human*> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        delete v[i];      // a delete a pointer által mutatott objektumot törli!!!!!!!!!!!!!!!!!!!
        v[i] = 0;         // a pointereket 0-ra kell állítani, mert nem mutatnak semmire!!!!
    }
    v.clear();
}

void showGroup(const vector<Human*> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        printOut(v[i]);
    }
}

void printOut(const Human* h)
{
    cout << h->getName() << endl;
}



void askForFivePeople(vector<Human*> &v)
{
    string answer;
    string name;
    
    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "Ferfi vagy No szemelyt, esetleg Robotot hoznal letre?" << endl;
            cin >> answer;
        }
        while (answer != "f" && answer != "n" && answer != "f");
            
        cout << "Add meg a nevet!" << endl;
        cin >> name;
        Human* pHuman = 0;
        
        if (answer == "f")
        {
            pHuman = new Men(name);

        }
        if (answer == "n")
        {
            pHuman = new Women(name); 
        }
        if (answer == "r")
        {
            int prize = 0;
            cout << "Add meg a robot értékét!" << endl;
            cin >> prize;
            pHuman = new Robot(name, prize);
            
        }
        
        //        pHuman->setName(name);   /////// A konstruktorban már meg van adva!!!
        v.push_back(pHuman);
    }
}


Human* askForPeople()
{
    string answer;
    string name;

    do
    {
        cout << "Ferfi vagy No szemelyt, esetleg Robotot hoznal letre?" << endl;
        cin >> answer;
    }
    while (answer != "f" && answer != "n" && answer != "r");
            
    cout << "Add meg a nevet!" << endl;
    cin >> name;
    Human* pHuman = 0;
        
    if (answer == "f")
    {
        pHuman = new Men(name);

    }
    if (answer == "n")
    {
        pHuman = new Women(name); 
    }
    if (answer == "r")
    {
        int prize = 0;
        cout << "Add meg a robot értékét!" << endl;
        cin >> prize;
        pHuman = new Robot(name, prize);
    }
    pHuman->setName(name);   /////// A konstruktorban már meg van adva!!!
    return pHuman;
    
}

void checkCollague()
{
    int w, m, r = 0;
    w = Women::getWomenDb();
    m = Men::getMenDb();
    r = Robot::getRobotDb();
    
    cout << "A letszamok: " << "No: " << w << ", " << "Ferfi: " << m << ", " << "Robot: " << r << endl;
 
}