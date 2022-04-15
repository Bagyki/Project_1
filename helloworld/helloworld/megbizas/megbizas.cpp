#include<iostream>
#include<vector>
#include<string>
#include"order.cpp"
#include"loadandsave.cpp"
#include"converter.cpp"

using namespace std;

enum modification
{
    ADD,
    MODIFY,
    DELETE,
    CANCEL
};


void showOrders(const vector<Order*> &v);
bool askModification();
modification selectModification();
Order* addOrder();
void deleteOrder(vector<Order*> &v);
void modifyOrder(vector<Order*> &v);
void deleteOrders(vector<Order*> &v);

int main()
{
   
    vector<Order*> v;
    vector<string> s;
    LoadAndSave ls;

    
    ls.load(s);
    Converter::convertToOrder(s, v);

    bool modify = true;
    do   
    {
        showOrders(v);
        modify = askModification();
        if (modify == true)
        {
            modification ans = selectModification();   
        
            if (ans == ADD)
            {
                v.push_back(addOrder());
            }
            if (ans == MODIFY)
            {
                modifyOrder(v);
            }
            if (ans == DELETE)
            {
                deleteOrder(v);
            }
            if (ans == CANCEL)
            {
                // itt nem kell csinálni semmit
            }
            
        }
    }
    while (modify == true);

    Converter::convertToString(v, s);
    ls.save(s);
    deleteOrders(v);

}

void showOrders(const vector<Order*> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << i+1 << ". " << v[i]->showOrder() << endl;
    }
}

bool askModification()
{
    string answer;
    const string kerdes = "Akarsz modositani?";
    do
    {
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
    const string kerdesMit = "Mit szeretnel tenni? \n 1. Hozzaadni? \n 2. Modositani? \n 3. Torolni? \n 4. Mégse";
    do
    {
        cout << kerdesMit << endl;
        cin >> ans;
    }
    while (ans != "1" && ans != "2" && ans != "3" && ans != "4");

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
    if (ans == "4")
    {
        mod = CANCEL;
    }
    return mod;         
}

Order* addOrder()
{
    string orderer;
    double distance = 0;
    int a, b = 0;
    Order* pOrder = new Order;

    
    cout << "Add meg a megbizo nevet!" << endl;
    cin >> orderer;
    pOrder->setOrderer(orderer);
    
    cout << "Add meg a tavolsagot!" << endl;
    cin >> distance;
    pOrder->setDistance(distance);

    cout << "Belfoldi (1) vagy nemzetkozi (2) a fuvar?" << endl;
    cin >> a;
    cout << "Furgonnal (1) vagy kamionnal (2)?" << endl;
    cin >> b;
    pOrder->setLand(a);
    pOrder->setTruck(b);

    return pOrder;
}

void deleteOrder(vector<Order*> &v)
{
    if (v.size() > 0)
    {
        int answ = 0;     
        const string kerdesDel = "Melyik megrendelest szeretned torolni?";
        do
        {
            showOrders(v);
            cout << kerdesDel << endl;
            cin >> answ;
        }
        while (answ <= 0 || answ > v.size());

        delete v[answ-1];
        v[answ-1] = 0;
        v.erase(v.begin()+answ-1);
    }
    else
    {
        cout << "Nincs megrendeles!" << endl;
    }

}

void modifyOrder(vector<Order*> &v)
{
    if (v.size() > 0)
    {
        int answ;               
        string orderer;
        double distance;
        int a, b = 0;
        const string kerdesMod = "Melyik megrendelest szeretned modositani?";
        do
        {
            showOrders(v);
            cout << kerdesMod << endl;
            cin >> answ;

        }
        while (answ <= 0 || answ > v.size());
        // if (megvizsgalni, hogy a pointer nem NULL)  !!!!!!!!!!!!!!!
        cout << "Add meg a megbizot!" << endl;
        cin >> orderer;
        v[answ-1]->setOrderer(orderer);
        cout << "Add meg a tavolsagot!" << endl;
        cin >> distance;
        v[answ-1]->setDistance(distance);
        cout << "Belfoldi (1) vagy nemzetkozi (2) a fuvar?" << endl;
        cin >> a;
        v[answ-1]->setLand(a);
        cout << "Furgonnal (1) vagy kamionnal (2)?" << endl;
        cin >> b;
        v[answ-1]->setTruck(b);
        // else (nem tudjuk modositani)
    }
    else
    {
        cout << "Nincs megrendeles!" << endl;
    }
}

void deleteOrders(vector<Order*> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        delete v[i];      // a delete a pointer által mutatott objektumot törli!!!!!!!!!!!!!!!!!!!
        v[i] = 0;         // a pointereket 0-ra kell állítani, mert nem mutatnak semmire!!!!
    }
    v.clear();
}
