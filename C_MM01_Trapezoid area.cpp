#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int top, down, height;
    //
    while(cin>>top>>down>>height)
    {
        double ans = 0;
        ans = (top + down) * height/2.0;

        cout << fixed << setprecision(1);
        cout<<"Trapezoid area:"<<ans<<endl;
    }

}
