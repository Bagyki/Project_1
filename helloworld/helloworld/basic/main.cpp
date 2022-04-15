#include <iostream>
#include <array>

void kiirni(int szam, bool prim)                                            // kiirni függvény vár egy számot és hogy prim-e (bool értéket)
{
    if (prim == true)                                                       // vagy if (prim)   Ha prim     
        {
        std::cout << szam << " primszam" << "\n";                           // kiirja a szám prim
        }
    else                                                                    // különben
        {
        std::cout << szam << " nem primszam" << "\n";                       // kiirja a szám nem prim
        }
}

bool prim(int szam)                                                         // prim függvény vár egy számot
{
    bool prim = true;                                                       // alapból azt mondja, hogy prim
    
    if (szam > 1)                                                           // ha a szám nagyobb mint 1
    {
        for (int oszto = 2; oszto < szam; oszto++)                                   // végig megy az összes osztón 2-től a szám-1 -ig
        {
            if (szam % oszto == 0)                                                   // ha osztoja (osztható vele maradék nélkül)
            {
            prim = false;                                                            // találtunk egy osztót -> nem prim
            }
        }
    }
    else                                                                    // különben
    {
        prim = false;                                                           // nem prim
    }    
    return prim;                                                            // visszaadjuk hogy prim-e
}

int main()
{
    std::array<int, 10> primszamok = {3, -2, 27, 2, 131, 23, 10, 1, 0, 79};  // felvettünk egy 10 elemű tömböt

    for (int index = 0; index < primszamok.size(); index++)                 // végig megyünk a tömb minden elemén, az index 0-tól size-1 -ig változik
    {
        if (primszamok[index] > 0)                                          // ha az index-edik elem nagyobb mint 0
        {   
            if (prim(primszamok[index]))                                        // megvizsgáljuk az index-edik elemet, hogy prim-e
            {
                kiirni(primszamok[index], true);                                // ha prim, kiiratjuk a kiirni függvénnyel, hogy prim
            }
            else                                                                // különben
            {
                kiirni(primszamok[index], false);                               // kiiratjuk a kiirni függvénnyel, hogy nem prim
            }
            /*
            kiirni(primszamok[index], prim(primszamok[index]));                 // kiirjuk a kiirni függvénnyel a számot és hogy prim-e
            */
        }   
    }
}




/*
void kiir(int x)
{
    std::cout << x <<"\n";
}


int osszead(int x, int y)
{
    int eredmeny = x + y;
    
    return eredmeny;
}


bool nagyobb(int x, int y)
{
    bool eredmeny = x > y;

    return eredmeny;
}



bool pozitiv(int x)
{
    bool eredmeny = x >= 0;
    return eredmeny;
}


int main()
{
    std::array<int, 5> pozitivak = {-2, 5, 0, 6, -9};

    for (int index = 0; index < pozitivak.size(); index++)
    {
        if (pozitiv(pozitivak[index]))
        {
            std::cout << "pozitiv" << "\n";
        }
        else
        {
            std::cout << "negativ" << "\n";
        }
    }
}
*/




/*
int main()
{
    std::array<int, 9> aSzamok = {2, 3, -7, 8, 10, -2, -8, 0, 6};

    for (int index = 0; index < aSzamok.size(); index++)
    {
        kiir(aSzamok[index]);
    }
    int osszeg = osszead(20, 30);

    std::cout << "Az eredmeny:" << osszeg << "\n";   

    int a = 8;
    int o = 9;
    if (nagyobb(a, o)) 
        {
            std::cout << a << " a nagyobb\n";
        }
        else
        {
            std::cout << o << " a nagyobb\n";
        }

}       
*/







/*{
    int a = 6;               
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 10;
    
    if (a >= b && a >= c && a >= d && a >= e) 
    {
        std::cout << "A legnagyobb szam:" << a;
    }
    else if (b >= a && b >= c && b >= d && b >= e)
    {
        std::cout << b;
    }   
    else if (c >= a && c >= b && c >= d && c >= e)
    {
        std::cout << c;
    }
    else if (d >= a && d >= b && d >= c && d >= e)
    {
        std::cout << d;     
    }
    else 
    {
        std::cout << e;
    }
      
}
*/

/*
{
    int a = 6;               
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    
    if (a >= b && a >= c && a >= d && a >= e) 
    {
        std::cout << "A legnagyobb szam:" << a;
    }
    else 
    {
        if (b >= a && b >= c && b >= d && b >= e)
        {
            std::cout << b;
        }
        else
        {
            if (c >= a && c >= b && c >= d && c >= e)
            {
               std::cout << c; 
            }
            else
            {
                if (d >= a && d >= b && d >= c && d >= e)
                {
                    std::cout << d;
                }
                else
                {
                    std::cout << e;
                }
            }
        }
    }

    

}
*/

/*
{
    int a = -2;                
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int eredmeny;

    if (a>=b) 
        eredmeny = a;
    else
        eredmeny = b;

    if (eredmeny <= c)
        eredmeny = c;
    
    if (eredmeny <= d)
        eredmeny = d;
   
    if (eredmeny <= e)
        eredmeny = e;


    std::cout << eredmeny;


}
*/

/*
{
    int a = 6;                
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int eredmeny = a;

    if (eredmeny <= b) 
        eredmeny = b;

    if (eredmeny <= c)
        eredmeny = c;
    
    if (eredmeny <= d)
        eredmeny = d;
   
    if (eredmeny <= e)
        eredmeny = e;


    std::cout << eredmeny;

}
*/

/*
{
    int iNum = 0;
    for (int index = 0; index <10; index++)
    {
        iNum = iNum + 1;
        std::cout << iNum << "\n";
    }



}
*/

/*
{
    for (int index = 0; index <10; index++)
    {
        std::cout << "kutya" << "\n";
    }
}
*/

/*
{
    for (int index = 10; index >=1; index--)
    {
        std::cout << index << "\n";
    }
}
*/

/*
{
    std::array<int, 12> aSzamok = {6, 2, 3, 4, 5, 10, 20, 13, 9, 27, 89, 34};         //számok tömb létrehozása, int típus, kaptak értéket 
    
    
    
    int eredmeny = aSzamok[0];

    for (int index = 1; index < aSzamok.size(); index++)
    {
        if (eredmeny <= aSzamok[index]) 
        {
            eredmeny = aSzamok[index];
        }
    }


/*
    for (int index = 0; index <4; index++)
    {
        if (eredmeny <= aSzamok[index+1]) 
        {
            eredmeny = aSzamok[index+1];
        }
    }


   std::cout << eredmeny;

}
*/

/*
{
    std::array<int, 9> aSzamok = {2, 3, -7, 8, 10, -2, -8, 0, 6};

    for (int index = aSzamok.size()-1; index >= 0; index--)
    {
        if (aSzamok[index] % 2 == 0)
        {
            std::cout << aSzamok[index] << "\n";
        }

    }
}
*/
/*
{
    int x = 27;  
    int y = 7;      
    int z = 0;      //x = 27, y = 7, z = 0

    z = x;          //x = 27, y = 7, z= 27
    x = y;          //x = 7, y = 7, z = 27
    y = z;          //x = 7, y = 27, z = 27

}
*/
