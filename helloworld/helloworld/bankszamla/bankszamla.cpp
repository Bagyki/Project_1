#include<iostream>
#include "transaction.cpp"
#include<vector>
#include<string>

using namespace std;

// bekéri a tranzakciók darabszámát
// bekéri a tranzankciókat egyesével
//     tranzakció: név + összeg (negatív összeg: kifizetés, pozitív összeg: befizetés)
// aktuális egyenleg kiszámítása
// külön-külön kiíratni az összes befizetést és kifizetést
// külön-külön kiíratni az átlagos be és kifizetést
// külön-külön kiíratni a legnagyobb be és kifizetést
// ha megadod a tranzakció nevét, akkor adja vissza az értékét

int balance(vector<transaction> a, vector<transaction> b);
int total(vector<transaction> c);
double avarage(vector<transaction> d);
int biggestTransaction(vector<transaction> e);
int lowestTransaction(vector<transaction> f);
void checkTransaction(vector<transaction> g, vector<transaction>h, string j);
int checkVector(vector<transaction> k, string l);
void checkResult(vector<transaction> a, vector<transaction> b, string c);

int main()
{
    cout << "Hany darab tranzakcio volt?" << endl;

    int num;
    cin >> num;

    vector<transaction> payment;
    vector<transaction> deposit;

    for (int i = 0; i < num; i++)
    {
        transaction T;

        cout << "Add meg a tranzakciot!" << endl;
        cin >> T.name;

        cout << "Add meg ezen tranzakcio erteket!" << endl;
        cin >> T.amount;

        if (T.amount < 0)
        {
            payment.push_back(T);
        }
        else
        {
            deposit.push_back(T);
        }
    }

    int bal = balance(payment, deposit);
    cout << "Az egyenleg: " << bal << endl;

    int totPoz = total(deposit);
    int totNeg = total(payment);
    
    int bala = totPoz + totNeg;
    cout << "Az egyenleg: " << bala << endl;

    cout << "Az osszes befizetes: " << totPoz << endl;
    
    totNeg = totNeg * -1;
    cout << "Az osszes kifizetes: " << totNeg << endl;
    
    double avgpoz = avarage(deposit);
    cout << "A befizetesek atlaga: " << avgpoz << endl;
    
    double avgmin = avarage(payment);
    avgmin = avgmin * -1;
    cout << "A kifizetesek atlaga: " << avgmin << endl;
    
    int big = biggestTransaction(deposit);
    cout << "A legnagyobb befizetes: " << deposit[big].name << ", " << "Osszege: " << deposit[big].amount << endl;

    int low = lowestTransaction(payment);
    int lowest = payment[low].amount * -1;
    cout << "A legnagyobb kifezetes: " << payment[low].name << ", " << "Osszege: " << lowest << endl;

    string transac;
    cout << "Adja meg melyik tranzakciot keresi!" << endl;
    cin >> transac;

    checkTransaction(payment, deposit, transac);

    //  checkVector(payment, transac);

    checkResult(payment, deposit, transac);
}




int balance(vector<transaction> a, vector<transaction> b)
{
    int pay = 0;
    int dep = 0;

    for(int i = 0; i < a.size(); i++)
    {
        pay = pay + a[i].amount;
    }
    
    for (int ind = 0; ind < b.size(); ind++)
    {
        dep = dep + b[ind].amount;
    }
    
    int balance = pay + dep;
    return balance;
}

int total(vector<transaction> c)
{
    int ttl = 0;

    for (int i = 0; i < c.size(); i++)
    {
        ttl = ttl + c[i].amount;
    }
    return ttl;
}

double avarage(vector<transaction> d)
{
    double avg = 0;

    if (d.size() > 0)
    {
        double tot = total(d);
        avg = tot / d.size();
    }
    else 
    {
        avg = 0;
    }
    return avg;
}

int biggestTransaction(vector<transaction> e)
{   
    int biggest = 0;
    if (e.size() > 0)
    {
        for (int i = 1; i < e.size(); i++)
        {
            if (e[i].amount > e[biggest].amount)
            {
                biggest = i;
            }
        }
    }
    else
    {
        biggest = -1;
    }
    return biggest;
}

int lowestTransaction(vector<transaction> f)
{
    int lowest = -1;
    if (f.size() > 0)
        {
            lowest = 0;
            for (int i = 1; i < f.size(); i++)
            {
                if (f[i].amount < f[lowest].amount)
                {
                    lowest = i;
                }
            }
        }
    return lowest;
}

void checkTransaction(vector<transaction> g, vector<transaction> h, string j)
{   
    int i = 0;
    //   bool found = true;

    while (i < g.size() && j != g[i].name)
    {
        i++;
    }
    if (i < g.size())
    {
        cout << g[i].amount << endl;
    }
    else
    {
        int ind = 0;
        while (ind < h.size() && j != h[ind].name)
        {
            ind++;
        }
        if (ind < h.size())
        {
            cout << h[ind].amount << endl;
        }
        else 
        {
            cout << "Nincs ilyen tranzakcio!" << endl;
            //    found = false;
        }
    }
}


int checkVector(vector<transaction> k, string l)
{
    int i = -1;

    if (k.size() > 0)
    {
        i = 0;
        while (i < k.size() && l != k[i].name)
        {
            i++;
        }
            if (i < k.size())
            {
                i;
            }
            else 
            {
            i = -1;
            }
    }
    return i;
}


void checkResult(vector<transaction> a, vector<transaction> b, string c)          //megcsinálja a kiiratást a checkVector függvény használatával
{
    int ind = checkVector(a, c);
    if (ind != -1)
    {
        cout << "A " << c << "erteke: " << a[ind].amount << endl;
    }
    else
    {   
        int index = checkVector(b, c);
        if (index != -1)
        {
            cout << "A " << c << " erteke: " << b[index].amount << endl;
        }
        else 
        {
            cout << "Nincs ilyen tranzakcio!" << endl;
        }
    }
}
