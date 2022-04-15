#include<iostream>
#include "student.cpp"
#include<vector>
#include<string>

using namespace std;

// megkérdi hány tanuló van
// mindegyik tanuló nevét kérdezi
// megkérdezi a pontszámát a dolgozatának (1-100)
// irassuk ki a gyerek pontszámát, "név: pont", soronként
// számolja ki a gyerekek összpontszámát
// számolja ki a gyerekek átlagpontszámát
// mondja meg, hogy hányan teljesítettek 30 pont alatt
// rendezze a tanulókat a pontszámok szerint növekvő sorrenbe
// írja ki




void list(vector<student> stud);
int totalPoints(vector<student> st);
double avgPoints(vector<student> avarage);
int lowPoints(vector<student> low);
void queue(vector<student> &stud);
void checkStudent(vector<student> students, string member);
bool checkStudent2(vector<student> students, string member);

int main()
{
    cout << "Hany tanulo van?" << endl;
    int number;
    cin >> number;

    vector<student> students;

    for (int i = 0; i < number; i++)
    {
        student S;
        
        cout << "Add meg a tanulo nevet!" << endl;
        cin >> S.name;
        
        cout << "Add meg a tanulo dolgozatanak pontszamat!" << endl;
        cin >> S.point;

        
        students.push_back(S);
    }

    list(students);

    int tot = totalPoints(students);
    
    cout << "A tanulok osszes pontszama: " << tot << endl;

    cout << "A tanulok atlagos pontszama: " << avgPoints(students) << endl;

    cout << "A 30 pont alatt teljesitok szama: " << lowPoints(students) << endl;

    queue(students);

    list(students);

    cout << "Melyik tanulora vagy kivancsi? Add meg a nevet!" << endl;
    
    string member;
    cin >> member;

    //checkStudent(students, member);
    
    bool van = checkStudent2(students, member); 

    if (van)
    {
        cout << "Van ilyen." << endl;
    } 
    else
    {
        cout << "Nincs ilyen." << endl;
    }
}

void list(vector<student> stud)
{
    for (int i = 0; i < stud.size(); i++)
    {
        cout << stud[i].name << ": " << stud[i].point << "," << endl;
    }
}

int totalPoints(vector<student> st)
{
    int total = 0;

    for (int i = 0; i < st.size(); i++)
    {
        total = total + st[i].point;
    }
    return total;
}

double avgPoints(vector<student> avarage)
{
    double avg = 0;

    if (avarage.size() > 0)
    {
        double total = totalPoints(avarage);
        avg = total / avarage.size();
    }
    else 
    {
        avg = 0;
    }
    return avg;
}

int lowPoints(vector<student> low)
{
    int lowPoint = 0;

    for (int i = 0; i < low.size(); i++)
    {
        if (low[i].point < 30)
        {
            lowPoint++;
        }
    }
    return lowPoint; 
}

void queue(vector<student> &stud)
{
    for (int ism = 0; ism < stud.size()-1; ism++)
    {
        for (int x = 0; x < stud.size()-1-ism; x++)
        {
            if (stud[x].point > stud[x+1].point)
            {
                student stu = stud[x];
                stud[x] = stud[x+1];
                stud[x+1] = stu;
            }
        }
    }
}


void checkStudent(vector<student> students, string member)
{
    int i = 0;
    while (i < students.size() && member != students[i].name)
    {
        i++;
    }

    if (i < students.size())
    {
        cout << "Van " << member << " nevu tanulo!" << endl;
    }
    else
    {
        cout << "Nincs " << member << " nevu tanulo!" << endl;
    }
}

bool checkStudent2(vector<student> students, string member)
{
    int i = 0;
    bool eredmeny = true;

    while (i < students.size() && member != students[i].name)
    {
        i++;
    }

    if (i < students.size())
    {
        eredmeny = true;
    }
    else
    {
        eredmeny = false;
    }
    return eredmeny;
}

