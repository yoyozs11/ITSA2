#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int hour, salary;
    double total;
    while(cin>>hour)
    {
        total = 0.0;
        cin>>salary;
        if(hour>120)
        {
            total += (hour-120)*salary*1.66;
            hour=120;
        }
        if(hour>60)
        {
            total += (hour-60)*salary*1.33;
            hour = 60;
        }
        total += hour*salary;
        cout << fixed << setprecision(1);
        cout<<total<<endl;
    }
}
