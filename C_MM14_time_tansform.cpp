#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int day, hour, minute, sec;
    day = t/86400;
    t%=86400;
    hour = t/3600;
    t%=3600;
    minute = t/60;
    t%=60;
    sec = t;
    cout<<day<<" days\n"<<hour<<" hours\n"<<minute<<" minutes\n"<<sec<<" seconds\n";
}
