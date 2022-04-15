#include <iostream>
#include <array>



void kiirat(std::array<int, 10> list)
{
    for (int ind = 0; ind < list.size(); ind++)
        {
            std::cout << list[ind] << "\n";
        }
}


int legkisebb(std::array<int, 10> num)
{
    int eredmeny = num[0];

    for (int index = 1; index < num.size(); index++)
    {
        if (eredmeny >= num[index])
        {
            eredmeny = num[index];
        }
    }
    return eredmeny;
}


void lecserel(std::array<int, 10>& sorrend)
{

}


void rendez(std::array<int, 10>& sorrend)
{
    std::array<int, 10> vmi = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


    for (int i = 0; i < sorrend.size(); i++)
    {
        int x = legkisebb(sorrend);

        vmi[i] = x;

        i = i + 1;

        lecserel(sorrend);
    }
    sorrend = vmi;
  
}


int main()
{
    std::array<int, 10> num = {10, 27, 9, 2, 3, 8, 5, 4, 4, 26};
    

    rendez(num);
    
    kiirat(num);
    

}



/*
void modosit(int& szam)
{
    szam = szam + 1;
}

int main()
{
    int x = 27;
    modosit(x);
    std::cout << x;
}
*/


