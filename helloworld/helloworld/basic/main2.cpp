#include <iostream>
#include <vector>

#include "napok.cpp"

using namespace std;

int main()
{
    Day ma;
    ma.sTranslation = "Kedd";
    ma.dMaxTemp = 3.4;
    ma.dMinTemp = -2.8;
    ma.bWorkday = TUESDAY;

    Day holnap;
    holnap.sTranslation = "Szerda";
    holnap.dMaxTemp = 4.5;
    holnap.dMinTemp = -2.3;
    holnap.bWorkday = WEDNESDAY;

    vector<Day> vDays;          //másolatban kerül a vector-ba!!!!!!!!
    vDays.push_back(ma);
    vDays.push_back(holnap);

    holnap.sTranslation = "Dog";

    cout << vDays[1].sTranslation;

    return 0;
}