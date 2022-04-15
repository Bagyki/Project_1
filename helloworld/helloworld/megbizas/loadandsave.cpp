#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class LoadAndSave
{
public:
    LoadAndSave()
    {
        m_File = "megrendelesek.log";           //// ha ebből static változót csinálunk, akkor a 2 függvény is lehet static
    }
    ~LoadAndSave()
    {

    }

    void save(const vector<string> &s) const
    {
        ofstream myfile;
        myfile.open (m_File);

        for (int i = 0; i < s.size(); i++)
        {
            myfile << s[i] << endl;
        }
        myfile.close();
    }

    bool load(vector<string> &s) const
    {
        s.clear();
        bool error = false;
        string row;
        ifstream myfile (m_File);
        if (myfile.is_open())
        {
            while (getline(myfile, row))
            {
                s.push_back(row);
            }
            myfile.close();
        }
        else 
        {
            error = true;
        }
        return error;
    }

private:
    string m_File;
};