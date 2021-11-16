#include <iostream>
#include <array>

int main()

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
*/

    std::cout << eredmeny;

}
