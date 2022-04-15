#include<iostream>
#include<vector>
#include<string>
#include <fstream>
#include "hotelszoba.cpp"

using namespace std;


int main()
{
    apartman R1(100, 4);
    
    cout << R1.getNumber() << endl;
    cout << R1.getPerson() << endl;
    cout << R1.getPrice() << endl;


    standardRoom R2(101, 4);
    
    cout << R2.getNumber() << endl;
    cout << R2.getPerson() << endl;
    cout << R2.getPrice() << endl;

}