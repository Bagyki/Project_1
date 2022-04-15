#include<iostream>
#include<vector>
#include<string>
#include <fstream>

using namespace std;


void read(vector<string> &v);
void save(vector<string> v, string fileName);
bool load(vector<string> &v, string fileName);
void write(vector<string> v);

int main()
{
    vector<string> names;

    read(names);

    save(names, "list.txt");

    names.clear();
    
    bool hiba = load(names, "list2.txt");
    
    if (false == hiba)
    {
        write(names);
    }
}


void read(vector<string> &v)
{
    string name;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Add meg a tanulo nevet!" << endl;
        cin >> name;
        v.push_back(name);
    }
}


void write(vector<string> v)
{
    cout << "A nevek: " << endl;
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}


void save(vector<string> v, string fileName)
{
    ofstream myfile;
    myfile.open (fileName);

    for (int i = 0; i < v.size(); i++)
    {
        myfile << v[i] << endl;
    }

    myfile.close();
}


bool load(vector<string> &v, string fileName)
{
    bool error = false;
    string name;
    ifstream myfile (fileName);
    if (myfile.is_open())
    {
        while (getline(myfile, name))
        {
            v.push_back(name);
        }
        myfile.close();
    }
    else 
    {
        cout << "Nem tudtam megnyitni"; 
        error = true;
    }
    return error;
}