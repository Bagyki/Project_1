#include<iostream>


using namespace std;


bool prim(int n);
bool prim2(int n);

int main()
{
    int n = 0;
    
    cout << "Add a vizsgalni kivant szamot!" << endl;
    
    cin >> n;

    if (n >= 0)
    {
        bool p = false;

        if (n > 1)
        {
            p = prim(n);
        }
        

        if (p == false)
        {
            cout << "A(z) " << n << " nem primszam!" << endl;
        }
        else
        {
            cout << "A(z) " << n << " primszam!" << endl;
        }
        

    }
    else
    {
        cout << "Adj meg termeszetes szamot!" << endl;
    }
    
    
    for (int i = 2; i < 101; i++)
    {
        if (prim(i) == true)
        {
            cout << i << endl;
        }
    }



}


bool prim(int n)                                                         
{                                                       
    int a = 2;

    do
    {
        a++;
    } 
    while (n % a != 0 && a < n);
    
    return (a == n);
}


bool prim2(int n)
{
    bool prim = true;

    for (int a = 2; a < n && prim; a++)                        // feltétel!!!!!!!!!!!!!!!!           
    {
        if (n % a == 0)                                                   
        {
            prim = false;                                                           
        }
    }
    return prim;  
}