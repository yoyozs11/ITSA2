#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int down, height;
    while(cin>>down>>height)
    {
        double ans = 0;
        ans = down * height/2.0;

        cout << fixed << setprecision(1);
        cout<<ans<<endl;
    }
}
