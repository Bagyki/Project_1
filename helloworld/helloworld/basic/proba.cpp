#include <iostream>
#include <array>

using namespace std;

int main()
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
}