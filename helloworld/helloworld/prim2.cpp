#include<iostream>
#include<vector>
//#include<math.h>

using namespace std;

void upLoadVector(vector<int> &v);
void showVector(const vector<int> &v);
void nullContent(vector<int> &v, int x);
void showVector2(const vector<int> &v);

int main()
{
    vector<int> v;

    upLoadVector(v);
    showVector(v);

    for (int x = 2; x < v.size(); x++)
    {
        if (v[x] != 0)
        {
            
            nullContent(v, x);
        }
    }
    
    showVector2(v);

}

void upLoadVector(vector<int> &v)
{
    int szamok = 0;
    for (int i = 0; i <= 101; i++)
    {
        v.push_back(szamok);
        szamok++;
    }
}

void showVector(const vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << "/////////////////////////" << endl;
}

void showVector2(const vector<int> &v)
{
    cout << "A primszamok " << v.size()-1 << "-ig:" << endl;
    for (int i = 2; i < v.size(); i++)
    {
        if (v[i] != 0)
        {    
            cout << v[i] << endl;
        }
    }
}

void nullContent(vector<int> &v, int x)
{
    
    int i = x;
    for (i=i+x; i < v.size(); i=i+x)
    {
        v[i] = 0;
    }
}