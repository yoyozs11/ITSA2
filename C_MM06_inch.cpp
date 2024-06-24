#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    double ans;
    while(cin>>a)
    {
        ans = a*1.6;
        cout << fixed << setprecision(1);
        cout<<ans<<endl;
        //printf("%.1f\n", ans);
    }
}
