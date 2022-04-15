#include <string>
#include <vector>

using namespace std;

enum WeekDays
{
     MONDAY,
     TUESDAY,
     WEDNESDAY,
     THURSDAY,
     FRIDAY,
     SATURDAY,
     SUNDAY,
};

struct Day
{
    WeekDays eDay;

    string sTranslation;
    double dMaxTemp;
    double dMinTemp;

    bool bWorkday;
};
