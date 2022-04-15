#include <iostream>
#include <array>
#include <vector>

using namespace std;


int numOfWorkers();
void getSalary(int num, vector<int> &v);
void showSalary(vector<int> salaries);
int cost(vector<int> salaries);
int highSalaries(vector<int> salaries);
void addBonus(vector<int> &salaries, int bonus);
int bestworker(vector<int> salaries);
void sortSalary(vector<int> &salaries);


int main()
{
    int workers = numOfWorkers();
    vector<int> salaries;

    getSalary(workers, salaries);

    showSalary(salaries);

    cout << endl << "Teljes koltseg: " << cost(salaries);
    
    double allcosts = cost(salaries);
    cout << endl << "Az atlag fizetes: " << allcosts / salaries.size();

    cout << endl << "A jol keresok szama: " << highSalaries(salaries);

    int bonus;
    cout << endl << "Mennyi lesz a bonusz? " << endl;
    cin >> bonus;

    addBonus(salaries, bonus);
    showSalary(salaries);

    cout << endl << "A legjobban kereso dolgozo: " << bestworker(salaries);
    cout << endl << "A legjobban kereso dolgozo fizetese: " << salaries[bestworker(salaries)];
    cout << endl;

    sortSalary(salaries);
    showSalary(salaries);

    return 0;
}

int numOfWorkers()
{
    cout << "Hany dolgozod van?" << endl;
    int num = 0;
    cin >> num;
    return num;
}

void getSalary(int num, vector<int> &v)
{
    for (int i = 0; i < num; i ++)
    {
        cout << "Add meg a fizetest!" << endl;
        int salary = 0;
        cin >> salary;
        v.push_back(salary);
    }
}

void showSalary(vector<int> salaries)
{
    for (int i = 0; i < salaries.size(); i++)
        {
            cout << salaries[i] << ",";
        }
}

int cost(vector<int> salaries)
{
    int total = 0;
    for (int i = 0; i < salaries.size(); i++)
    {
        total = total + salaries[i];
    }
    return total;
}

int highSalaries(vector<int> salaries)
{
    double allcosts = cost(salaries);
    double avg = allcosts / salaries.size();

    int no = 0;
    for (int i = 0; i < salaries.size(); i++)
    {
        if (salaries[i] >= avg)
        {
            no++;
        }
    }
    return no;
}

void addBonus(vector<int> &salaries, int bonus)
{
    for (int i = 0; i < salaries.size(); i++)
    {
        salaries[i] = salaries[i] + bonus;
    }
}

int bestworker(vector<int> salaries)
{
    int best = 0;
    for (int i = 1; i < salaries.size(); i++)
    {
        if (salaries[i] > salaries[best])
        {
            best = i;
        }
    }
    return best;
}

void sortSalary(vector<int> &salaries)
{
    for(int ism = 0; ism < salaries.size()-1; ism++)        //ism = ismétlések száma
    {
        for(int elem = 0; elem < salaries.size()-1-ism; elem++)     //elem = a vizsgált elem      !!!!! size()-1-ism  - csak a rendezetlen elemekig vizsgálunk!!!!!!!
        {
            if (salaries[elem] > salaries[elem+1])
            {
                int t = salaries[elem];
                salaries[elem] = salaries[elem+1];
                salaries[elem+1] = t;
            }
        }
    }
}