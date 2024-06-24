#include <iostream>

using namespace std;

int main()
{
    int dif;
    double tmp;
    int ans;
    while(cin>>dif)
    {
        dif*=100;
        tmp = dif/23.8;
        ans = tmp;
        if(tmp>ans)
            cout<<ans+1<<endl;
        else
            cout<<ans<<endl;
    }
}
