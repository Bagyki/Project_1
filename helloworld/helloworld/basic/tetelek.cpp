#include <iostream>
#include <array>
#include <vector>

using namespace std;


void kivalogatas(vector<int> a, vector<int> &b);

int main()
{
    vector<int> a;
    vector<int> b;

    int szam;

    cout << "Add meg az elso elemet!" << endl;
    cin>>szam;
    
    while (szam != 0)
    {
        a.push_back(szam);
        cout << "Add meg a kovetkezo szamot!" << endl;
        cin>>szam;
    }
    kivalogatas(a, b);
    for (int i = 0; i < b.size(); i++)
    {
        cout<< "A b vektor "<< i + 1 << ".eleme: "<< b[i] << endl;
    }

    return 0;
}

void kivalogatas(vector<int> a, vector<int> &b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 10)
        {
            b.push_back(a[i]);
        }
    }
}




/*/////////////     Max-Min Index egyidejű meghatározása  /////////////////

int main()
{
    vector<int> vec;
    int szam;

    cout << "Add meg az elso elemet!" << endl;
    cin>>szam;
    
    while (szam != 0)
    {
        vec.push_back(szam);
        cout << "Add meg a kovetkezo szamot!" << endl;
        cin>>szam;
    }
    int max = 0, min = 0;
    
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > vec[max])
        {
            max = i;
        }
        if (vec[i] < vec[min])
        {
            min = i;
        }
    }
    cout<< "A legnagyobb ertek: "<< vec[max] << endl;
    cout<< "A legnagyobb erteku elem sorszama: " << max+1 << endl;
    cout<< "A legkisebb ertek: "<< vec[min] << endl;
    cout<< "A legkisebb erteku elem sorszama: " << min+1 << endl;

    return 0;
}
*/

/*//////////////////////// Tétel 10, Max és Min egyidejű meghatározása

int main()
{
    vector<int> vec;
    int szam;

    cout << "Add meg az elso elemet!" << endl;
    cin>>szam;
    
    while (szam != 0)
    {
        vec.push_back(szam);
        cout << "Add meg a kovetkezo szamot!" << endl;
        cin>>szam;
    }
    int max = vec[0], min = vec[0];
    
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] > max) 
        {
            max = vec[i];
        }
        if (vec[i] < min)
        {
            min = vec[i];
        }
    }
    cout<< "A legnagyobb ertek: "<< max << endl;
    cout<< "A legkisebb ertek: "<< min << endl;

    return 0;
}
*/



/* //////////////////////////// Tétel 9, Minimum-index kiválasztás

int mini(vector<int> v);

int main()
{
    vector<int> vec;
    int szam;

    cout << "Add meg az elso elemet!" << endl;
    cin>>szam;
    
    while (szam != 0)
    {
        vec.push_back(szam);
        cout << "Add meg a kovetkezo szamot!" << endl;
        cin>>szam;
    }
    cout<< "A legkisebb erteku elem sorszama: "<< mini(vec) + 1 << endl;
    cout<< "A legkisebb elem erteke: " << vec[mini(vec)] << endl;

    return 0;
}

int mini(vector<int> v)
{
    int minindex = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[minindex])
        {
            minindex = i;
        }
    }
    return minindex;
}
*/



/* ////////////////////// Tétel 8, Minimum kiválasztás

int min (vector<int> v);

int main()
{
    vector<int> vec;
    int szam;

    cout << "Add meg az elso elemet!" << endl;
    cin>>szam;
    
    while (szam != 0)
    {
        vec.push_back(szam);
        cout << "Add meg a kovetkezo szamot!" << endl;
        cin>>szam;
    }
    cout<< "A sorozat legkisebb eleme: "<< min(vec) << endl;
    return 0;
}

int min (vector<int> v)
{
    int min = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    return min;
}
*/



/* /////////////////////// Tétel 7, Maximum index kiválasztás

int maxi(vector<int> v);

int main()
{
    vector<int> vec;
    int szam;

    cout << "Add meg az elso elemet!" << endl;
    cin>>szam;
    
    while (szam != 0)
    {
        vec.push_back(szam);
        cout << "Add meg a kovetkezo szamot!" << endl;
        cin>>szam;
    }
    cout<< "A legnagyobb erteku elem sorszam: "<< maxi(vec) + 1<< endl;
    
    /////
    int legnagyobbSzamIndexe = maxi(vec);
    cout<< "A legnagyobb elem erteke:  "<< vec[legnagyobbSzamIndex] << endl;
    /////

    cout<< "A legnagyobb elem erteke:  "<< vec[maxi(vec)] << endl;
    
    return 0;
}

int maxi(vector<int> v)
{
    int maxindex = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > v[maxindex])
        {
            maxindex = i;
        }
    }
    return maxindex;
}
*/



/* ///////////////////////// Tétel 6, Maximum kiválasztás

int max(vector<int> v);

int main()
{
    vector<int> vec;
    int szam;

    for (int i = 0; i < 7; i++)
    {
        cout<< "Add meg a(z)" << i + 1 <<".nap papir mennyiseget!"<< endl;
        cin>>szam;
        vec.push_back(szam);
    }
    cout<< "A maximum: "<< max(vec) << endl;

    return 0;
}

int max(vector<int> v)
{
    int maxi = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > maxi)
        { 
            maxi = v[i];
        }
    }
    return maxi;
}
*/



/* /////////////////////////// Tétel 5, Kivalásztás

int kivalasztas(vector<int> v);

int main()
{
    vector<int> vec;
    int szam;   

    cout<<"Add meg az elso elemet!"<< endl;
    cin>>szam;
    while (szam != 0)
    {
        vec.push_back(szam);
        cout<<"Add meg a kovetkezo elemet!"<< endl;
        cin>>szam;
    }
    cout<< "Az 5os a "<< kivalasztas(vec)+1 << ".helyen all." << endl;
    return 0;
}

int kivalasztas(vector<int> v)
{
    int i = 0;
    while (v[i] != 5)
    {
        i++;
    }
    return i;
}
*/



/* /////////////////////////////// Tétel 4, lineáris keresés

int main()
{
    vector<int> vec;
    int szam;
    
    cout<<"Add meg az elso erteket!"<< endl;
    cin>>szam;

    while (szam != -100)
    {
        vec.push_back(szam);
        cout<<"Add meg a kovetkezo erteket!"<< endl;
        cin>>szam;
    }
    int i = 0;
    while (i < vec.size() && vec[i] > 0)
    {
        i++;
    }
    if (i < vec.size())
    {
        cout<<"A fagyas napja: "<< i+1 << endl;
    }
    else
    {
        cout<<"Nem volt fagyas."<< endl;

    }
    return 0;
}
*/



/* /////////////////////////////////// Tétel 3, megszámlálás

int db(vector<int> v);

int main()
{
    vector<int> vec;
    int jegy;
    
    cout<<"Add meg az elso jegyet! "<< endl;
    cin>>jegy;
    while (jegy != 0)
    {
        vec.push_back(jegy);
        cout<<"Add meg a kovetkezo jegyet!"<< endl;
        cin>>jegy;
    }
    cout<<"Az otosok száma: "<<db(vec)<< endl;

    return 0;
}

int db(vector<int> v)
{
    int darab = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 5)
        {
            darab = darab + 1; // darab++
        }
    }
    return darab;
}
*/



/* //////////////////////////////// Tétel 2, összegzés

int osszeg(vector<int> v);

int main()
{
    vector<int> vec;
    int szam;

    do
    {
        cout<<"Add meg az elemet"<< endl;
        cin>>szam;
        vec.push_back(szam);
    }
    while (szam != 0);

    cout<<osszeg(vec)<<" az osszeg."<< endl;

    return 0;
}

int osszeg(vector<int> v)
{
    int ossz = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ossz = ossz + v[i];
    }
    return ossz;
}
*/



/* //////////////////////// Tétel 1, eldöntés

bool eldont(vector<int> v);

int main()
{
    vector<int> vec;
    int oldal;

    for(int i = 0; i < 3; i++)
    {
        cout<< "Add meg az "<< i+1 << ".oldalt"<< "\n";
        cin>>oldal;
        vec.push_back(oldal);
    }
    if (eldont(vec))
        {
            cout<<"Volt benne 5-os oldal.";
        }
    else    
    {
        cout<<"Nem volt benne 5-os oldal.";
    }
    return 0;
}

bool eldont(vector<int> v)
    {
        int i = 0;
        while (i < v.size() && v[i] != 5)
        {
            i++;
        }
        return i < v.size();
    }
*/
