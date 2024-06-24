#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double c, f;
    while(cin>>c)
    {
        f = c*1.8 + 32;
        cout << fixed << setprecision(1);
        cout<<f<<endl;
    }
}
