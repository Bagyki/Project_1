#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class FileHandler
{
public:
    FileHandler()
    {
        m_FileName = "naptar.log";
    }
    ~FileHandler()
    {

    }

    void save(vector<string> v)
    {
        ofstream myfile;
        myfile.open (m_FileName);

        for (int i = 0; i < v.size(); i++)
        {
            myfile << v[i] << endl;
        }
        myfile.close();
    }


    bool load(vector<string> &v)
    {
        v.clear();
        bool error = false;
        string row;
        ifstream myfile (m_FileName);
        if (myfile.is_open())
        {
            while (getline(myfile, row))
            {
                v.push_back(row);
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
    string m_FileName;
};