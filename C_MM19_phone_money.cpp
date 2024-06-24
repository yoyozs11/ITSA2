#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int minute;
    double money;
    cin>>minute;
    if(minute>=1500)
    {
        money = minute*0.9*0.79;
    }
    else if(minute>800)
    {
        money = minute*0.9*0.9;
    }
    else
    {
        money = minute*0.9;
    }
    cout << fixed << setprecision(1);
    cout<<money<<endl;
}
